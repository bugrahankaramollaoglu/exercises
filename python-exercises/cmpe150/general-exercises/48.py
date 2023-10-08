# random library usage

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

# bir de choices() var ama o karışık
# bir seçeneğin seçilme ihtimalinin oranını da belirliyosun

# 8karakterlik random string yaratır
# import string
alp = string.ascii_lowercase + string.digits
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
