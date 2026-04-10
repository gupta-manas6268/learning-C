from flask import Flask, render_template, request
import pandas as pd
import os
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.ensemble import RandomForestClassifier

app = Flask(__name__)

file_path = 'WA_Fn-UseC_-Telco-Customer-Churn.csv'
raw_data = pd.read_csv(file_path)

data = raw_data.copy()

if 'customerID' in data.columns:
    data.drop('customerID', axis=1, inplace=True)

data['TotalCharges'] = pd.to_numeric(
    data['TotalCharges'],
    errors='coerce'
)
data['TotalCharges'] = data['TotalCharges'].fillna(
    data['TotalCharges'].median()
)

encoders = {}

for col in data.select_dtypes(include='object').columns:
    le = LabelEncoder()
    data[col] = le.fit_transform(data[col].astype(str))
    encoders[col] = le

X = data.drop('Churn', axis=1)
y = data['Churn']

scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_scaled, y)

# Feature Importance
feature_importance_df = pd.DataFrame({
    'Feature': X.columns,
    'Importance': model.feature_importances_
})

feature_importance_df = feature_importance_df.sort_values(
    by='Importance',
    ascending=False
)

top_features = feature_importance_df.head(5).to_dict(
    orient='records'
)

feature_cols = [
    col for col in raw_data.columns
    if col not in ['customerID', 'Churn']
]


def save_full_user_profile(name, status, user_data):
    global raw_data

    # Convert status to Yes / No for original dataset
    if str(status).strip().lower() in ['yes', 'churn']:
        churn_value = 'Yes'
    else:
        churn_value = 'No'

    # Save in user_profiles.csv
    save_file = 'user_profiles.csv'

    full_data = {
        'Name': name,
        'Status': churn_value
    }

    for key, value in user_data.items():
        full_data[key] = value

    df = pd.DataFrame([full_data])

    if os.path.exists(save_file):
        df.to_csv(
            save_file,
            mode='a',
            header=False,
            index=False
        )
    else:
        df.to_csv(save_file, index=False)

    # Save in original telco CSV
    original_row = {}

    # Put name into customerID
    original_row['customerID'] = name

    # Add all frontend fields
    for col in raw_data.columns:
        if col == 'customerID':
            continue
        elif col in user_data:
            original_row[col] = user_data[col]
        elif col == 'Churn':
            original_row[col] = churn_value
        else:
            original_row[col] = ''

    new_row_df = pd.DataFrame([original_row])

    raw_data = pd.concat(
        [raw_data, new_row_df],
        ignore_index=True
    )

    raw_data.to_csv(
        'WA_Fn-UseC_-Telco-Customer-Churn.csv',
        index=False
    )

@app.route('/', methods=['GET', 'POST'])
def home():
    prediction_text = ''
    result_class = ''
    sidebar_message = ''

    form_fields = []

    for col in feature_cols:
        if raw_data[col].dtype == 'object' and col != 'TotalCharges':
            options = sorted(
                list(raw_data[col].dropna().unique())
            )
            form_fields.append({
                'name': col,
                'type': 'select',
                'options': options
            })
        else:
            median_val = float(
                pd.to_numeric(
                    raw_data[col],
                    errors='coerce'
                ).dropna().median()
            )

            form_fields.append({
                'name': col,
                'type': 'number',
                'value': median_val
            })

    if request.method == 'POST':
        # Sidebar fields
        user_name = request.form.get('user_name')
        user_status = request.form.get('user_status')

        # Main frontend fields
        input_data = {}

        for col in feature_cols:
            val = request.form.get(col)
            input_data[col] = [val]

        input_df = pd.DataFrame(input_data)

        # Keep original values for CSV
        original_user_data = input_df.iloc[0].to_dict()

        # ML preprocessing
        for col in input_df.columns:
            if col in encoders:
                le = encoders[col]
                input_val = str(input_df[col].iloc[0])

                if input_val in le.classes_:
                    input_df[col] = le.transform([input_val])
                else:
                    input_df[col] = 0
            else:
                input_df[col] = pd.to_numeric(
                    input_df[col],
                    errors='coerce'
                )

        input_df = input_df.fillna(0)

        input_scaled = scaler.transform(input_df)

        prediction = model.predict(input_scaled)[0]
        probability = model.predict_proba(input_scaled)[0][1]

        if prediction == 1:
            prediction_text = (
                f'High Risk: Customer likely to churn '
                f'({probability * 100:.2f}%)'
            )
            result_class = 'result-churn'
        else:
            prediction_text = (
                f'Low Risk: Customer likely to stay '
                f'({(1 - probability) * 100:.2f}%)'
            )
            result_class = 'result-stay'

        # Save full data
        save_full_user_profile(
            user_name,
            user_status,
            original_user_data
        )

        sidebar_message = 'Full user info saved successfully.'

    return render_template(
        'frontend.html',
        fields=form_fields,
        prediction=prediction_text,
        result_class=result_class,
        sidebar_message=sidebar_message,
        top_features=top_features
    )


if __name__ == '__main__':
    app.run(debug=True)