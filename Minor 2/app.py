import pandas as pd
import numpy as np
import streamlit as st
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

# Load data
file_path = 'WA_Fn-UseC_-Telco-Customer-Churn.csv'
raw_data = pd.read_csv(file_path)
data = raw_data.copy()

# Basic cleaning
if 'customerID' in data.columns:
    data.drop('customerID', axis=1, inplace=True)

if 'TotalCharges' in data.columns:
    data['TotalCharges'] = pd.to_numeric(data['TotalCharges'], errors='coerce')
    data['TotalCharges'].fillna(data['TotalCharges'].median(), inplace=True)

# Encode categorical columns
encoders = {}
for col in data.select_dtypes(include='object').columns:
    le = LabelEncoder()
    data[col] = le.fit_transform(data[col].astype(str))
    encoders[col] = le

# Features and target
X = data.drop('Churn', axis=1)
y = data['Churn']

# Scale features
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Train test split
X_train, X_test, y_train, y_test = train_test_split(
    X_scaled, y, test_size=0.2, random_state=42
)

# Train models
lr_model = LogisticRegression(max_iter=1000)
rf_model = RandomForestClassifier(n_estimators=200, random_state=42)

lr_model.fit(X_train, y_train)
rf_model.fit(X_train, y_train)

# Predictions
lr_pred = lr_model.predict(X_test)
rf_pred = rf_model.predict(X_test)

lr_acc = accuracy_score(y_test, lr_pred)
rf_acc = accuracy_score(y_test, rf_pred)

# Best model selection
model = rf_model if rf_acc >= lr_acc else lr_model
best_name = 'Random Forest' if rf_acc >= lr_acc else 'Logistic Regression'
best_acc = max(lr_acc, rf_acc)

# Streamlit frontend
st.set_page_config(page_title='Advanced Churn Prediction Dashboard', layout='wide')
st.title('Customer Churn Prediction Dashboard')
st.write('Real-world ML project using Kaggle Telco Customer Churn dataset')

# Top metrics
col1, col2, col3 = st.columns(3)
with col1:
    st.metric('Rows', len(raw_data))
with col2:
    st.metric('Best Model', best_name)
with col3:
    st.metric('Accuracy', f'{best_acc * 100:.2f}%')

# Dataset preview
st.subheader('Dataset Preview')
st.dataframe(raw_data.head(10))

# Basic EDA
st.subheader('Exploratory Data Analysis')
fig, ax = plt.subplots(figsize=(6, 4))
raw_data['Churn'].value_counts().plot(kind='bar', ax=ax)
ax.set_title('Churn Distribution')
ax.set_xlabel('Churn')
ax.set_ylabel('Count')
st.pyplot(fig)

# Feature importance for RF
if best_name == 'Random Forest':
    st.subheader('Feature Importance')
    importance = pd.DataFrame({
        'Feature': X.columns,
        'Importance': model.feature_importances_
    }).sort_values('Importance', ascending=False)
    st.dataframe(importance.head(10))

# Sidebar input form
st.sidebar.header('Customer Details')
input_values = {}
feature_cols = [col for col in raw_data.columns if col not in ['customerID', 'Churn']]

for col in feature_cols:
    if raw_data[col].dtype == 'object':
        options = list(raw_data[col].astype(str).unique())
        input_values[col] = st.sidebar.selectbox(col, options)
    else:
        median_val = float(pd.to_numeric(raw_data[col], errors='coerce').dropna().median())
        input_values[col] = st.sidebar.number_input(col, value=median_val)

# Prediction button
if st.sidebar.button('Predict Churn'):
    input_df = pd.DataFrame([input_values])

    # Same preprocessing
    if 'TotalCharges' in input_df.columns:
        input_df['TotalCharges'] = pd.to_numeric(input_df['TotalCharges'], errors='coerce')
        input_df['TotalCharges'].fillna(data['TotalCharges'].median(), inplace=True)

    for col in input_df.columns:
        if col in encoders:
            le = encoders[col]
            val = str(input_df[col].iloc[0])
            if val not in le.classes_:
                val = le.classes_[0]
            input_df[col] = le.transform([val])

    input_scaled = scaler.transform(input_df)
    prediction = model.predict(input_scaled)[0]
    probability = model.predict_proba(input_scaled)[0][1]

    st.subheader('Prediction Result')
    if prediction == 1:
        st.error(f'Customer is likely to churn ({probability * 100:.2f}%)')
    else:
        st.success(f'Customer is likely to stay ({(1 - probability) * 100:.2f}%)')

# Model comparison
st.subheader('Model Comparison')
comparison_df = pd.DataFrame({
    'Model': ['Logistic Regression', 'Random Forest'],
    'Accuracy': [lr_acc, rf_acc]
})
st.dataframe(comparison_df)

# Classification report
st.subheader('Classification Report')
report = classification_report(y_test, model.predict(X_test), output_dict=True)
report_df = pd.DataFrame(report).transpose()
st.dataframe(report_df)

# Confusion matrix
st.subheader('Confusion Matrix')
cm = confusion_matrix(y_test, model.predict(X_test))
cm_df = pd.DataFrame(cm)
st.dataframe(cm_df)

# Business insights
st.subheader('Business Insights')
st.write('1. Customers with month-to-month contracts are more likely to churn.')
st.write('2. Higher monthly charges may increase churn probability.')
st.write('3. Longer tenure customers generally stay longer.')
st.write('4. Fiber internet users may show different churn trends.')

# Footer section
st.subheader('Project Modules')
st.write('- Data Loading')
st.write('- Data Cleaning')
st.write('- Encoding + Scaling')
st.write('- Model Training')
st.write('- Model Comparison')
st.write('- Dashboard Frontend')
st.write('- Live Prediction')
st.write('- EDA and Insights')
