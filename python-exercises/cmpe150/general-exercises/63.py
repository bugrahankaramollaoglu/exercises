# random library usage

import secrets
import os
import datetime
import string
import random
import time

# 1 ile 100 arasında random int
print(random.randint(1, 100))

# 0 ile 1 arasında random float
print(random.random())

# random True ya da False verir
print(random.choice(['Doğru', 'Yanlış']))

# listeyi random karıştırır
lst = [1, 3, 20, 30, 21]
random.shuffle(lst)
print(lst)

# listeden random eleman seçer
lst = [1, 3, 20, 30, 21]
print(random.choice(lst))

# 8karakterlik random string yaratır
# import string
alp = string.ascii_letters + string.digits
passw = ''.join(random.choice(alp) for i in range(8))
print(passw)

# random RGB
myTuple = tuple(random.randint(0, 255) for i in range(3))
print(myTuple)

# random tarih in 2022
start_date = datetime.date(2022, 1, 1)
end_date = datetime.date(2022, 12, 31)
delta = end_date - start_date
random_date = start_date + \
    datetime.timedelta(days=random.randint(0, delta.days))
print(random_date)

# random telefon
phone_number = f"(0{random.randint(500, 599)}) {random.randint(100, 999)} {random.randint(1000, 9999)}"
print(phone_number)

""" random bir ifade her çalıştırıldığında aynı sonucu verir
çünkü random dediğimiz şey aslında tam olarak random değildir.
buna pseudorandomity denir. mesela  """

# Set the seed to 123
random.seed(123)

# Generate 5 random numbers between 0 and 1
for i in range(5):
    print(random.random())

""" bu ifade sürekli aynı random sayıları verir çünkü seed
value değişmiyor. bunu değiştirip başka bir şey yaparsan
sayılar da değişir fakat bu sefer de onlar sürekli tekrar
etmeye başlar. bunu çözmenin birkaç yolu var """
# birinci yol
random.seed(time.time())

# ikinci yol
# urandom() 4 byte büyüklügünde random int byte'ı verir
# int.from_bytes ifadesi ise bu byte halinde geleni int'e çeviriyor
# big de big-endian dan geliyor yani msb comes first
seed = int.from_bytes(os.urandom(4), byteorder="big")
random.seed(seed)

# üçüncü yol
seed = secrets.randbits(32)
random.seed(seed)
