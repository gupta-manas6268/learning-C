# Don't commit it because it has your 'App Password'.













import smtplib, ssl

def send_email(Username, Password, Receiver, message): # message => String.
    host = "smtp.gmail.com"
    port = 465

    sender_username = f"{Username}" # Type your email address
    password = f"{Password}" # Type App Password for 'Mail'.
    # 'App Password'(↑), I made for 'Mail' & saved it in Bitwarden Folders. 

    receiver = f"{Receiver}" # receiver & sender email address can be same.
    context = ssl.create_default_context()

    with smtplib.SMTP_SSL(host, port, context=context) as server:
        server.login(sender_username, password)
        server.sendmail(sender_username, receiver, message)