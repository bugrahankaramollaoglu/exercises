""" şifre generate eden bir program yazacağız """

# importing random to use it for randomizing
import random

# şifrenin uzunluğunu önceden belirlemesini istiyoruz kullanıcıdan
passlen = int(input("enter the length of password:"))

# karakterleri store ettiğimiz değişken
s = "abcdefghijklmnopqrstuvwxyz01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"

# şifre generate ediyoruz
p = "".join(random.sample(s, passlen))

print(p)
