# yield from bir üretecin içinde, başka bir üretecin yield ile döndüreceği değerleri
# tekrar yield etmek istediğimizde kullanılabilir.

def fun1():
    yield "fun1 basladi"
    yield "fun1 bitti"


def fun2():
    yield "fun2 basladi"
    yield from fun1()  # burada fun1'in yield ettiği her şey devreye girer
    yield "fun2 bitti"


a = fun2()
print(next(a)) # fun2 basladi
print(next(a)) # fun1 basladi
print(next(a)) # fun1 bitti
print(next(a)) # fun2 bitti
