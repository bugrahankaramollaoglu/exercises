x = 0.0

for i in range(10):
    x = x + 0.1
    print(x)
if (x == 1.0):
    print(x, 'is 1.0')
else:
    print(x, 'is not 1.0 yet')

"""
beklendiği gibi if'e değil else'e girer. sebebi ise ondalıklı sayıların tam olarak
binary'de temsil edilemiyor oluşlarıdır. 0.1 tam olarak edilemediğinden her eklenişinde
ufak miktarda eksik ya da fazla ekleme yapar, yani 0.1 sayisi .1000000 diye sonsuza
kadar gitmez, illa bir yerde 0 düzeni bozulur. hata payı da katlana katlana
arttığından sayı bir nebze fazla arttırılmış ve 1.0'ı geçmiş olur. çözmek için

from decimal import Decimal

x = Decimal('0.0')

for i in range(10):
    x = x + Decimal('0.1')
    print(x)
if (x == Decimal('1.0')):
    print(x, 'is 1.0')
else:
    print(x, 'is not 1.0 yet')

decimal() fonksiyonunu kullanabilirsin

"""
