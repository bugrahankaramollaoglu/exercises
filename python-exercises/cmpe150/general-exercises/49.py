import random

random.seed(123)

for i in range(5):
    print(random.randint(1, 100))


"""
seed aynı oldugu müddetce hep aynı random sayilar gelecek
pythonda random kütüphanesi Mersenne-Twister denilen bir algoritma kullaniyor
bu algoritma 32 bitlik bir sayi üretiyor (pseudorandom).
bunun icin 3 sey kullanabilirsin

1) seed satırını kaldırabilirsin
2) os.urandom() fonksiyonunu kullanabilirsin

import os
import random

seed_bytes = os.urandom(4)  # generate 4 random bytes
seed_value = int.from_bytes(seed_bytes, byteorder="big")  # convert bytes to integer
random.seed(seed_value)  # set the random seed

3) time.time() kullanabilirsin.

import time

random.seed(time.time())
time fonksiyonu 1 ocak 1971'den bu yana geçen zamanı kullanarak random değer
üretir. 

"""
