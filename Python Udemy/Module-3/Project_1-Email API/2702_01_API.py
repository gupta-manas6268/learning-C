import requests
import os
from dotenv import load_dotenv

# Load environment variables from '.env' file
load_dotenv()

# 'api_key' & url from https://newsapi.org/
# api_key = ""                          # UR
api_key = os.getenv("NEWS_API_KEY") 

url = "https://newsapi.org/v2/everything?q=tesla&from=2025-09-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}"
# url also has 'api_key' at it's end.

request = requests.get(url)

# Method-1 => String.
content = request.text # content => api of that website in 'url'
# '.text' => gives API in string.
print(type(content)) # content => string.
print(content, "\n\n\n")