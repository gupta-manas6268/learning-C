# Little-updated from '3801_Scrape_Extract.py'.
# (See line-27)


import requests
import selectorlib
import smtplib, ssl
import os
import time
from dotenv import load_dotenv
load_dotenv()

URL = "https://programmer100.pythonanywhere.com/tours/"

HEADERS = { 
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) ' \
    'AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}

def scrape(url):
    """Scrape the page source from the URL"""
    response = requests.get(url, headers=HEADERS)
    source = response.text
    return source

def extract(source):
    extractor = selectorlib.Extractor.from_yaml_file("3801_extract.yaml")
    value = extractor.extract(source)["tours"]
    return value



# Difference in code from here.
def store(extracted):
    with open("data.txt", "a") as file:
    # "a"(append) => i.e. add element in file in List, not 
    #              over-write elements in "data.txt" file.
        file.write(extracted + "\n")

def read():
    with open("data.txt", "r") as file:
        return file.read() 
        # '.read()' => Reads data in file as String.

def send_email(message): 
    host = "smtp.gmail.com"
    port = 465

    sender_username = os.getenv("GMAIL") # Type your email address
    password = os.getenv("APP_PASSWORD") # Type App Password for 'Mail'.
    # 'App Password'(↑), I made for 'Mail' & saved it in Bitwarden Folders. 

    receiver = os.getenv("GMAIL") # receiver & sender email address can be same.
    context = ssl.create_default_context()

    with smtplib.SMTP_SSL(host, port, context=context) as server:
        server.login(sender_username, password)
        server.sendmail(sender_username, receiver, message)



if __name__ == "__main__":
    while True: # Runs after 2-seconds again.
        scraped = scrape(URL)
        extracted = extract(scraped)

        content = read()
        if extracted != "No upcoming tours":
            if extracted not in content:
                store(extracted)
                send_email(extracted)
                print("Email Sent")

        time.sleep(2) # 2-sec.