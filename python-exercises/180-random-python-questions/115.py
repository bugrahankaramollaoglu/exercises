shift = 3
text = "BUGRA KARA"
şifreliText = ""

for c in text:
    if c.isupper():
        
        # find the position in 0-25
        c_unicodeHali = ord(c)
        c_indexNumarasi = ord(c) - ord("A")

        # perform the shift
        # şifreli mesajı normal mesaja çevirmek için de + shift değil - shift diyoruz
        yeniİndexNumarasi = (c_indexNumarasi + shift) % 26

        # convert to new character
        yeniUnicodeHali = yeniİndexNumarasi + ord("A")

        yeniKarakter = chr(yeniUnicodeHali)

        # append to şifreliText
        şifreliText += yeniKarakter

    else:
        # since they aint uppercase, leave them as they are
        şifreliText += c

print("text:", text)
print("şifreli text:", şifreliText)
