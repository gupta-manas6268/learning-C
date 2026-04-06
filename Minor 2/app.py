from flask import Flask, render_template, request
import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.ensemble import RandomForestClassifier

app = Flask(__name__)

# --- MODEL TRAINING AND DATA PREPROCESSING ---

# Load dataset
file_path = 'WA_Fn-UseC_-Telco-Customer-Churn.csv'
raw_data = pd.read_csv(file_path)

# 1. Clean Data
data = raw_data.copy()
if 'customerID' in data.columns:
    data.drop('customerID', axis=1, inplace=True)

# TotalCharges has some empty strings; convert to numeric and fill with median
data['TotalCharges'] = pd.to_numeric(data['TotalCharges'], errors='coerce')
data['TotalCharges'] = data['TotalCharges'].fillna(data['TotalCharges'].median())

# 2. Encode Categorical Variables
encoders = {}
for col in data.select_dtypes(include='object').columns:
    le = LabelEncoder()
    # 'Churn' is our target, we'll handle it separately but it needs encoding too
    data[col] = le.fit_transform(data[col].astype(str))
    encoders[col] = le

# 3. Split Features and Target
X = data.drop('Churn', axis=1)
y = data['Churn']

# 4. Scale Features
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# 5. Train Model
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_scaled, y)

# List of features for the form (excluding the target 'Churn')
feature_cols = [col for col in raw_data.columns if col not in ['customerID', 'Churn']]

@app.route('/', methods=['GET', 'POST'])
def home():
    prediction_text = ''
    result_class = ''
    
    # Generate form fields dynamically based on the dataset
    form_fields = []
    for col in feature_cols:
        if raw_data[col].dtype == 'object' and col != 'TotalCharges':
            options = sorted(list(raw_data[col].unique()))
            form_fields.append({'name': col, 'type': 'select', 'options': options})
        else:
            # For numeric fields, provide the median as a default starting value
            median_val = float(pd.to_numeric(raw_data[col], errors='coerce').dropna().median())
            form_fields.append({'name': col, 'type': 'number', 'value': median_val})

    if request.method == 'POST':
        # Collect data from form
        input_data = {}
        for col in feature_cols:
            val = request.form.get(col)
            input_data[col] = [val]

        input_df = pd.DataFrame(input_data)

        # Preprocess the specific input to match training data
        for col in input_df.columns:
            if col in encoders:
                le = encoders[col]
                input_val = str(input_df[col].iloc[0])
                # Handle cases where value might not have been in training
                if input_val in le.classes_:
                    input_df[col] = le.transform([input_val])
                else:
                    input_df[col] = 0 
            else:
                input_df[col] = pd.to_numeric(input_df[col], errors='coerce')

        # Fill any missing values in input
        input_df = input_df.fillna(0)

        # Scale and Predict
        input_scaled = scaler.transform(input_df)
        prediction = model.predict(input_scaled)[0]
        probability = model.predict_proba(input_scaled)[0][1]

        if prediction == 1:
            prediction_text = f'High Risk: Customer is likely to churn ({probability * 100:.2f}%)'
            result_class = 'result-churn'
        else:
            prediction_text = f'Low Risk: Customer is likely to stay ({(1 - probability) * 100:.2f}%)'
            result_class = 'result-stay'

    return render_template('frontend.html', fields=form_fields, prediction=prediction_text, result_class=result_class)

if __name__ == '__main__':
    app.run(debug=True)