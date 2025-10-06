import requests
import Email_API
import os
from dotenv import load_dotenv

# Load environment variables from '.env' file
load_dotenv()

# api_key = "" # Type 'api_key' from 'https://newsapi.org/' & login by Bitwarden.
# url = "https://newsapi.org/v2/everything?
#         "q=tesla&from=2025-05-16&" \
#         "sortBy=publishedAt&" \
#         f"apiKey={api_key}"
# (language parameter isn't set here, so, it gives each language 'article.' (↑))
api_key = os.getenv("NEWS_API_KEY") 

topic = "tesla" # You can change topic.

url = "https://newsapi.org/v2/everything?" \
        f"q={topic}&from=2025-09-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}" \
        "&language=en"
#  We set here language parameter in 'url' also. (↑ language = english.)

request = requests.get(url)
content = request.json() 

body = ""
# for article in content["articles"]:  # It will send all 100-articles in email.
# It will only send 1st 20-articles in email.
body = "Warning: Someone Sneaking into House"

body = body.encode("utf-8")

Username = os.getenv("Email")
Password = os.getenv("Email_API_KEY")
Receiver = os.getenv("Email")

Email_API.send_email(Username, Password, Receiver, message=body)