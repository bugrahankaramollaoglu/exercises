""" girilen inputun baş harflerini veren program"""

# kullanıcıdan input alıyoruz
msg = str(input("please enter something: "))

# cümleyi kelimelere bölüyoruz ve text'e atıyoruz
text = msg.split()

# creating an empty variable that'll hold the initials
basHarf = ""

# taking the initials of each (i) word in text
for i in text:
    # i'nin ilk harfini büyütüp (upper()) stringe ("") ekliyoruz
    basHarf = basHarf + str(i[0]).upper()

print(basHarf)
