# örnek

import math


class Matematik:
    @staticmethod
    def pi():
        return round(math.pi, 2)

    @staticmethod
    def square(n):
        return n ** 0.5

# static metotları hem instance hem de class üzerinden kullanabilirsin


# instance üzerinden
a = Matematik()
print(a.pi())  		 # 3.14
print(a.square(16))  # 4.0

# class üzerinden
print(Matematik.pi())  		 # 3.14
print(Matematik.square(25))  # 5.0
