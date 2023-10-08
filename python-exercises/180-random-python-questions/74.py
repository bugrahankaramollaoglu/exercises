import pyautogui
import random

character = "0123456789abcdefghijklmnopqrstuvwxyz"
characterList = list(character)

password = pyautogui.password("enter your password:")
guess_password = ""
while guess_password != password:
    guess_password = random.choices(characterList, k=len(password))
    print(">>>>"+str(guess_password)+"<<<<")

    if guess_password == list(password):
        print("your password is:" + "".join(guess_password))
        break