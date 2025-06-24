# Open URL in Browser & then Right-click in 'View Page Source.
#  It gives me HTML code of Website.
# 
# Right click on 'No Upcoming Tours' or '...', & then Inspect,
#  It gives me 'id=displaytimer'.

import requests
import selectorlib

URL = "https://programmer100.pythonanywhere.com/tours/"

HEADERS = { 
# HEADERS => Used, because some Websites didn't want Code-Scripts to see their
#          content. 'HEADERS' will tell that it is open in Web-Browser.
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) ' \
    'AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}

def scrape(url):
    """Scrape the page source from the URL"""
    response = requests.get(url, headers=HEADERS)
    source = response.text
    # '.text' => Gives 'HTML' code from URL.
    return source

def extract(source):
    extractor = selectorlib.Extractor.from_yaml_file("extract.yaml")
    value = extractor.extract(source)["tours"]
    # ["tours"] => In 'extract.yaml', "tours" Dictionary-Key
    #               is there.
    return value

if __name__ == "__main__":
    scraped = scrape(URL)
    print(scraped)

    extracted = extract(scraped)
    print(extracted)
    # (↑) O/P => 'No Upcoming Tours' or '....'.