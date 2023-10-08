def f(x):
    y = 1
    x = x + y
    print('x = ', x)
    return x


# tıpkı C'deki gibi fonksiyonu bir değişkene atamak
# o değişkeni çalıştırmakla aynı şeydir
a = f(2)

# ayrıca python'da fonksiyona sokulan değişkenin değeri değişmez çünkü scope farklı
x = 3
print('1) x: ', x)  # 3
f(x)  # x burada 4 yazdırdı +1 ekleyip fakat daha sonra tek başına x yazdırınca 3'te kaldı
print('2) x: ', x)  # 3
