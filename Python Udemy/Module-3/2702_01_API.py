import requests

# 'api_key' & url from https://newsapi.org/
api_key = "" 
url = "https://newsapi.org/v2/everything?q=tesla&from=2025-05-16&" \
        "sortBy=publishedAt&" \
        f"apiKey={api_key}"
# url also has 'api_key' at it's end.

request = requests.get(url)

# Method-1 => String.
content = request.text # content => api of that website in 'url'
# '.text' => gives API in string.
print(type(content)) # content => string.
print(content, "\n\n\n")