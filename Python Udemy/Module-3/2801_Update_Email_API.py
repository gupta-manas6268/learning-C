# Don't commit it has your API key.













import requests
import Email_API_2703

api_key = "" # Type 'api_key' from 'https://newsapi.org/' & login by Bitwarden.
# url = "https://newsapi.org/v2/everything?
#         "q=tesla&from=2025-05-16&" \
#         "sortBy=publishedAt&" \
#         f"apiKey={api_key}"
# (language parameter isn't set here, so, it gives each language 'article.' (↑))

topic = "tesla" # You can change topic.

url = "https://newsapi.org/v2/everything?" \
        f"q={topic}&from=2025-05-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}" \
        "&language=en"
#  We set here language parameter in 'url' also. (↑ language = english.)

request = requests.get(url)
content = request.json() 

body = ""
# for article in content["articles"]:  # It will send all 100-articles in email.
for article in content["articles"][:20]: # It will only send 1st 20-articles in email.
    body = "Subject: Today's news" + "\n" + body + str(article["title"]) \
            + "\n" + str(article["description"]) + "\n" \
            + article["url"] + 2*"\n"

body = body.encode("utf-8")

Username = input("Enter username email: ")
Password = input("Enter app-password: ")
Receiver = input("Enter receiver email: ")

Email_API_2703.send_email(Username, Password, Receiver, message=body)