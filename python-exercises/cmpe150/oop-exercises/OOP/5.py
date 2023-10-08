# modüller

import os  # demek os modülünün içindeki fonksiyonları kullanabilmek demektir

# iki şekil modül vardır
# kendi yarattığımız modüller
# built-in modüller
# hazir kütüphane modülleri
# 3. şahısların modülleri

with open("a.txt", "w") as f:
    print(dir(os), file=f)
