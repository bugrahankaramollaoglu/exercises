import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

import sys

mesaj=MIMEMultipart()
mesaj['from']="beowulf0855u@gmail.com"
mesaj['to']="bugrahankaramollaoglu@gmail.com"
mesaj['subject']="Deneme Maili"

yazi="Merhaba smtp mail örneği"

mesaj_yapisi=MIMEText(yazi,'plain')
mesaj.attach(mesaj_yapisi)
try:
    mail=smtplib.SMTP('smtp.gmail.com',587)
    mail.ehlo()
    mail.starttls()
    mail.login('beowulf0855@gmail.com','ŞİFRE')
    mail.sendmail(mesaj['from'],mesaj['to'],mesaj.as_string())
    print ('Mail gönderildi')
    mail.close()
except:
    print('hata oluştu')