# Don't commit when it has your API key.













import requests
import Email_API_2703

api_key = "" # Type 'api_key' from 'https://newsapi.org/' & login by Bitwarden.
url = "https://newsapi.org/v2/everything?q=tesla&from=2025-05-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}"

request = requests.get(url)
content = request.json() 

body = ""
for article in content["articles"]:
    body = body + str(article["title"]) + "\n" \
            + str(article["description"]) + "\n" \
            + article["url"] + 2*"\n"

body = body.encode("utf-8")

Username = input("Enter username email: ")
Password = input("Enter app-password: ")
Receiver = input("Enter receiver email: ")

Email_API_2703.send_email(Username, Password, Receiver, message=body)