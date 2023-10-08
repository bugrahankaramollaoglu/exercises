a = 10


def fun(y):
    y += 1


fun(a)
fun(a)
fun(a)
print(a)  # 10
# a'nın değeri değişmedi çünkü fonksiyonu her yeniden
# çağırdığında yaptığın değişiklikler silindi
# değişsin istiyosan şöyle yapmalıydın

a = 10


def fun(y):
    y += 1
    return y


a = fun(a)
a = fun(a)
a = fun(a)
print(a)
