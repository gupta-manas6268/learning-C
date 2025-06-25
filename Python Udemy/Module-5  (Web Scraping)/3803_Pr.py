# Q.: Take Temperature from https://programmer100.pythonanywhere.com 
#      & write Date + Temperature in 'date-temperature.txt' file.

import requests
import selectorlib
import time

URL = "https://programmer100.pythonanywhere.com"

HEADERS = { 
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) ' \
    'AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}

def scrape(url):
    """Scrape the page source from the URL"""
    response = requests.get(url, headers=HEADERS)
    source = response.text
    return source

def extract(source):
    extractor = selectorlib.Extractor.from_yaml_file("3803_extract.yaml")
    value = extractor.extract(source)["tours"]
    return value

if __name__ == "__main__":
    scraped = scrape(URL)
    extracted = extract(scraped)

    with open("date-temperature.txt", 'a') as file:
        time = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())
        file.write(time + ", " + extracted + "\n")
    print(extracted)