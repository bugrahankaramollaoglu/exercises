import tkinter as tk
from tkinter import *
# pip install pyttsx3
import pyttsx3

engine = pyttsx3.init()

def speaknow():
    engine.say(textv.get())
    engine.runAndWait()
    engine.stop()

# genel bir tkinter çerçevesi yaratıyoruz
root = Tk()

textv = StringVar()

obj = LabelFrame(root, text="text to speech", font=20, bd=1)
obj.pack(fill="both", expand="yes", padx=10, pady=10)

lbl = Label(obj, text="text", font=30)
lbl.pack(side=tk.LEFT, padx=5)

text = Entry(obj, textvariable=textv, font=30, width=25, bd=5)
text.pack(side=tk.LEFT, padx=10)

btn =  Button(obj, text='Speak', font=20, bg="black", fg="white", command=speaknow)
btn.pack(side=tk.LEFT, padx=10)

# başlıktaki yazıyı ayarlıyoruz
root.title("text to speech")

# pencere boyutunu ayarlıyoruz
root.geometry("500x300")

# enden ve boydan pencere boyutu ayarlansın mı
root.resizable(False, False)
root.mainloop()
