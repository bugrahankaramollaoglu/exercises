""" Question:
Define a class with a generator which can iterate the numbers, which are divisible by 7,
between a given range 0 and n.
Hints:
Consider use yield
 """


class myClass:
    def __init__(self, n):
        self.n = n

    def __iter__(self):
        # it is called generator function
        for i in range(self.n):
            if (i % 7 == 0):
                yield i  # i'yi döndürüyor ama returnden farklı olarak kaldıgı yerden devam ediyor
                # yani fonksiyonu bitirmiyor, döndürülecekler listesine ekliyor


a = myClass(50)
for i in a:
    print(i, end=" ")  # 0 7 14 21 28 35 42 49
