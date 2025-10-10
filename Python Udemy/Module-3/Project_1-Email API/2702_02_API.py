import requests
import os
from dotenv import load_dotenv

# Load environment variables from '.env' file
load_dotenv()

# 'api_key' & url from https://newsapi.org/
api_key = ""
api_key = os.getenv("NEWS_API_KEY") 

url = "https://newsapi.org/v2/everything?q=tesla&from=2025-09-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}"
# url also has 'api_key' at it's end.

# Make request
request = requests.get(url)

# Method-2 => Dictionary.
content = request.json() # '.json' => gives API in dictionary.
print(type(content)) # content => dictionary.
print(content, "\n\n\n\n\n\n") 

print(content["articles"]) 
print(type(content["articles"])) # => List
print(len(content["articles"])) # => 100

# Access the article titles & description
i = 1
for article in content["articles"]:
    print(f"{i}:\n {article["title"]}")
    print(f"{i}:\n {article["description"]}")
    i += 1