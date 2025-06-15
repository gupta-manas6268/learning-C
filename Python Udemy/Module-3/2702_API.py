import requests

# 'api_key' & url from https://newsapi.org/
api_key = "ff147cea0eb8425abf6ab25341271fd6"
url = "https://newsapi.org/v2/everything?q=tesla&from=2025-05-15" \
        "&sortBy=publishedAt&apiKey=ff147cea0eb8425abf6ab25341271fd6"
# url also has 'api_key' at it's end.

request = requests.get(url)
content = request.text # content => api of that website in 'url'
print(content) 