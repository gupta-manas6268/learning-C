# Updated from '3803_Scrape_Extract.py' by using Classes.



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



# Class
class Event:
    def scrape(self, url): # Method => function in Class.
    # Methods in Classes always have 'self' variable to take 
    #  variables from '__init()' Method from that same Class.
    
        """Scrape the page source from the URL"""
        response = requests.get(url, headers=HEADERS)
        source = response.text
        return source

    def extract(self, source): # Method
        extractor = selectorlib.Extractor.from_yaml_file("4001_extract.yaml")
        value = extractor.extract(source)["tours"]
        return value


class Database:
    def __init__(self, database_path):
        print("Hello, from '__init__' method.")
        self.connection = sqlite3.connect(database_path)
    
    def store(self, extracted): 
    # store_Database => 'Method + Class', function-name.
        row = extracted.split(",")
        row = [item.strip() for item in row]

        cursor = self.connection.cursor()
        # 'self.connection.cur..()' => 'self' used as Middle-man to 
        #               use 'connection' variable in '__init__(self)'
        #               function.
        cursor.execute("INSERT INTO events VALUES(?,?,?)", row) # Insert
        self.connection.commit()

    def read(self, extracted):
        row = extracted.split(",") # String to List
        row = [item.strip() for item in row]
        Band, City, Date = row

        cursor = self.connection.cursor()
        cursor.execute("SELECT * FROM events WHERE band=? \
                        AND city=? AND date=?", (Band, City, Date)) # Select.
        rows_1 = cursor.fetchall() # List

        return rows_1


class Email:
    def send(self, message): # => send_Email => 'Method + Class'.
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
        event = Event() # Instance => of a Class.

        scraped = event.scrape(URL)
        extracted = event.extract(scraped) # string.

        if extracted != "No upcoming tours":
            database = Database(database_path="database.db")
            # (↑) '__init__()' function automatically executes
            #      when a class is called, & Arguments in 
            #   class is used by '__init__()' function.

            My_row = database.read(extracted)

            if My_row.__len__() == 0:
                database.store(extracted)

                email = Email()
                email.send(extracted)

                print("Email Sent")
        time.sleep(2) 