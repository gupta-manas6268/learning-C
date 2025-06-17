import requests

url = "https://photographylife.com/wp-content/uploads/2018/11/Moeraki-Boulders-New-Zealand.jpg"
response = requests.get(url)
print(response) # O/P => <Response [200]> => i.e. we get 'url' successfully.

# print(response.text) 
# Used (↑) when we have text data in a url web-page.
print(response.content) # It print that image byte code in terminal.

with open("image.jpg", "wb") as file: 
# "wb" => 'write-binary' used for writing image files.
#           because, we can't write it like text-files by 'w' method.
    file.write(response.content)