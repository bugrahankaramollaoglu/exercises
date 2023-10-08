# durmasını istiyosan return ekle

def fun():
    for i in range(1, 10):
        yield i
        if (i == 4):
            return i


a = fun()
print(next(a)) # 1
print(next(a)) # 2
print(next(a)) # 3
print(next(a)) # 4
print(next(a)) # hata verir
