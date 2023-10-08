def f():
    print(x)


def g():
    print(x)
    x = 1


x = 3
f()  # 3 yazdırır

x = 3
g()  # hata verir

"""
bunun sebebi g()'nin içinde x'e bir atama yapılması.
g() fonksiyonun artık global ve değeri 3 olan x'i değil de
kendi içinde lokal bir x aramasına sebep olur fakat
bulamadıgı icin hata verir. eğer x = 1'i üste yazsaydık 1
yazdırırdı.
"""
