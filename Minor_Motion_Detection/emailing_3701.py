import smtplib
# import imghdr                          # pyright: ignore
# imghdr => Doesn't work after python-version 3.13, so
#          use it's replacement 'filetype' package.
import filetype                          # pyright: ignore
from email.message import EmailMessage
import os
from dotenv import load_dotenv         # pyright: ignore


load_dotenv()
PASSWORD = os.getenv("Email_API_Key")
SENDER = os.getenv("SENDER_Email_Address")
RECEIVER = os.getenv("RECEIVER_Email_Address")

def send_email(image_path):
    print("send_email function started")

    email_message = EmailMessage()
    email_message["Subject"] = "New customer showed up!"
    email_message.set_content("Hey, we just saw a new customer!")

    with open(image_path, "rb") as file: 
    # "rb" => read-binary, because it is an image.
        content = file.read()

    # Detect image type (replaces imghdr.what)
    kind = filetype.guess(content)
    if kind is None:
        raise ValueError("Cannot determine image type for attachment")
    
    # email_message.add_attachment(content, maintype="image", subtype=imghdr.what(None, content))
    
    # Add attachment
    email_message.add_attachment(
        content,
        maintype="image",
        subtype=kind.extension # same purpose as imghdr.what(None, content)
    )

    gmail = smtplib.SMTP("smtp.gmail.com", 587) # 587 => Port of gmail
    gmail.ehlo()
    gmail.starttls()
    gmail.login(SENDER, PASSWORD)
    gmail.sendmail(SENDER, RECEIVER, email_message.as_string())
    gmail.quit()

    print("send_email function ended")

if __name__ == "__main__":
    send_email(image_path="images/5.png")