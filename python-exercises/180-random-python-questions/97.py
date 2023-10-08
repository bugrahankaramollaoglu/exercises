import tkinter as tk  # pencereleri yaratırken kullaniyoruz
from pytube import YouTube  # youtubedan videoları indirmek için kullaniyoruz
import os  # o anki dosyayı açmak için pwd amaçlı kullaniyoruz
from tkinter import ttk
import io  # internetten resim indirmek için kullaniyoruz
import subprocess  # linux'ta pwd kullanabilmek için kullaniyoruz
from PIL import Image, ImageTk
import urllib.request  # internetten resim indirmek için kullaniyoruz
# valid url kontrolü yapmak için kullaniyoruz
from pytube.exceptions import RegexMatchError

""" ALGO
 	2) önce youtube videosunu indirecek bir fonksiyon yaz
	1) sonra GUI yarat
  	3) sonra GUI'de bu fonksiyonu çalıştır
"""

# TODO progress bar yarat

# videoyu indirecek fonksiyon


def downloadVideo():
    url = url_entry.get()
    if (len(url) == 0):
        empty_url_label = tk.Label(root, text='URL boş olamaz',
                                   font=('JetBrains Mono', 12), fg='red')
        empty_url_label.place(relx=0.5, rely=0.37, anchor='center')
        root.after(1500, empty_url_label.destroy)
    else:
        try:
            yt = YouTube(url)
        except RegexMatchError:
            invalid_url_label = tk.Label(root, text='Invalid URL!',
                                         font=('JetBrains Mono', 12), fg='red')
            invalid_url_label.place(relx=0.5, rely=0.37, anchor='center')
            root.after(1500, invalid_url_label.destroy)
        else:
            video = yt.streams.get_highest_resolution()
            # progress bar
            fileSize = video.filesize
            print((fileSize//1024)//1024)
            #####
            video.download()
            # bilgi veren label kısmını oluştur
            name_label = tk.Label(root, text=f'isim:{yt.title}, boyut:{(fileSize//1024)//1024} MB',
                                  font=('JetBrains Mono', 15), fg='blue')
            name_label.place(relx=0.5, rely=0.65, anchor='center')
            # indirme tamamlandi yazdiran widget olustur
            status_label = tk.Label(root, text='Download Succesful!',
                                    font=('JetBrains Mono', 15), fg='green')
            status_label.place(relx=0.5, rely=0.72, anchor='center')
            # open folder butonu olustur
            openButton = tk.Button(root, text='open folder',
                                   font=('JetBrains Mono', 15), fg='blue', command=openFolder)
            openButton.place(relx=0.49, rely=0.8, anchor='center')


def openFolder():
    currentDir = os.getcwd()
    # os.startfile(currentDir) sadece windows'da çalışır.
    # linux için:
    subprocess.call(('open', currentDir))


# create the main window
root = tk.Tk()

# internetten youtube resmi ekle
photoURL = 'https://www.seekpng.com/png/full/1006-10064683_youtube-dark-icon-logo-youtube-play-png.png'
with urllib.request.urlopen(photoURL) as u:
    rawData = u.read()

im = Image.open(io.BytesIO(rawData))
photo = ImageTk.PhotoImage(im)

resized_img = im.resize((100, 100))
photo_img = ImageTk.PhotoImage(resized_img)

photo_label = tk.Label(root, image=photo_img)
photo_label.place(relx=0.5, rely=0.15, anchor='center')

# pencereyi isimlendir
root.title('Youtube Video Downloader')

# pencereyi boyutlandır
root.geometry("500x600")

# label oluştur.
label = tk.Label(root, text='Enter the URL',
                 font=('JetBrains Mono', 15))
label.place(relx=0.5, rely=0.3, anchor='center')
# burada bir başka geometri yöntemi olan pack() de kullanılabilir.
# label.pack() gibi. totalde 3 tane laying manager var: pack(), grid() ve place()

# entry oluşturur. içine yazı yazılabilen tkinter widgetıdır.
url_entry = tk.Entry(root, textvariable='Video Link', width=40)
# relx burada x eksenindeki konumunu belirtir. 0.5 ise tam ortadır.
# rely ise y eksenindeki konumunu belirtir.
url_entry.place(relx=0.5, rely=0.42, anchor='center')

# escape tuşuna basınca çıkmasını sağlar
root.bind('<Escape>', lambda event: root.destroy())

# download butonu oluştur
downloadButton = tk.Button(root, text='Download me', font=(
    'JetBrains Mono', 15), width=20, command=downloadVideo)
downloadButton.place(relx=0.04, rely=0.5)

# exit butonu oluştur
exitButton = tk.Button(root, text='Exit me', font=(
    'JetBrains Mono', 15), width=15, command=root.destroy)
exitButton.place(relx=0.550, rely=0.5)

# arka plan rengini değiştir
root.configure(bg='#8B0000')

# kapanmaması için pencereyi loopa sok
root.mainloop()

"""
https://www.youtube.com/watch?v=z0-I9DtRncU
"""
