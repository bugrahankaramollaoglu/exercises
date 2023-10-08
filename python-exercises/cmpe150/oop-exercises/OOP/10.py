# OOP in python

# nesne tabanlı-yönelimli-yönelik programlama aynı anlama gelir

# fonksiyonlar da birer veri tipidir

# bir class tanımlayalım

# sınıf isimleri conventionally büyük harfle başlar
class Person:  # Person(): da diyebilirdin, aynı şey
    yetenekler = ['c', 'cpp', 'cs']
    isim = 'bugra'
    print(yetenekler)
    print(isim)

# class altında tanımladığın değişkenlere class attributes denir.
# class altında tanımladığın fonksiyonlara class methods denir.


# fonksiyonları çağırırken fun() demek gerekiyordu, fakat class'larda
# çağırmasan bile yukarıdaki print'ler çalışır.

# attribute'ları değiştirmek istersen de
Person.isim = 'ahmet'
Person.yetenekler = ['python', 'JS', 'Java']

# ya da kendin de yazdirabilirsin
print(Person.isim)
print(Person.yetenekler)

# fakat böyle yaparsan Person classından tek bir instance oluşturabilirsin
# başka başka objeler de oluşturabilmek için onları yaratmalısın
