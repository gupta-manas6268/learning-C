import requests

url = "https://finance.yahoo.com/" 
# As, above(↑) URL is giving me O/P => "Edge: Too Many Requests"
# url = "https://www.google.com/search?q=yahoo+finance"

request = requests.get(url)
content = request.text
print(content)