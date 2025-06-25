# Little-updated from '3802_Scrape_Extract.py',
#  from Line-37.



import requests
import selectorlib
import smtplib, ssl
import os
import time
from dotenv import load_dotenv
load_dotenv()
import sqlite3

URL = "https://programmer100.pythonanywhere.com/tours/"

HEADERS = { 
    'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_1) ' \
    'AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'}

# Establish a connection only.
connection = sqlite3.connect("database.db")

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
    row = extracted.split(",")
    row = [item.strip() for item in row]

    cursor = connection.cursor()
    cursor.execute("INSERT INTO events VALUES(?,?,?)", row) # Insert
    connection.commit()

def read(extracted):
    row = extracted.split(",") # String to List
    row = [item.strip() for item in row]
    Band, City, Date = row

    cursor = connection.cursor()
    cursor.execute("SELECT * FROM events WHERE band=? \
                     AND city=? AND date=?", (Band, City, Date)) # Select.
    rows_1 = cursor.fetchall() # List

    return rows_1



def send_email(message): 
    host = "smtp.gmail.com"
    port = 465

    sender_username = os.getenv("GMAIL") 
    password = os.getenv("APP_PASSWORD") 
    # 'App Password'(↑), I made for 'Mail' & saved it in Bitwarden Folders. 

    receiver = os.getenv("GMAIL") 
    context = ssl.create_default_context()

    with smtplib.SMTP_SSL(host, port, context=context) as server:
        server.login(sender_username, password)
        server.sendmail(sender_username, receiver, message)



if __name__ == "__main__":
    while True: 
        scraped = scrape(URL)
        extracted = extract(scraped) # string.

        if extracted != "No upcoming tours":
            My_row = read(extracted)

            if My_row.__len__() == 0:
                store(extracted)
                send_email(extracted)
                print("Email Sent")

        time.sleep(2) 