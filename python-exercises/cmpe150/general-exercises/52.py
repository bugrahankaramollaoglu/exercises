# OOP

class intSet(object):
    def __init__(self):
        self.vals = []

    def insert(self, e):
        if not e in self.vals:
            self.vals.append(e)

    def member(self, e):
        return True if e in self.vals else False

    def remove(self, e):
        try:
            self.vals.remove(e)
        except:
            raise ValueError(str(e) + ' not found')

	# class'ların altında tanımladığın __ ile başlayan ve biten metotlar
	# (fonksiyonlar) özel fonksiyonlardır. dunder/magic methods diye geçerler.
	# __init__ fonksiyonu obje yaratıldığında çağrılır. classın tüm özelliklerini
	# o objeye atamak için kullanılır.
	# __str__ fonksiyonu bir objenin string reprezentasyonunu tanımlarken kullanılır.
	# str() ya da print() kullanıldığında çağrılır
    def __str__(self):
        self.vals.sort()
        result = ''
        for e in self.vals:
            result = result + str(e) + ','
        return '{' + result[:-1] + '}'


ex = intSet()  # intSet klasından bir nesne oluşturduk

ex.insert(3)
ex.insert(4)
ex.insert(5)

print(ex)  # {3,4,5}

print(ex.member(3))  # True
print(ex.member(4))  # True
print(ex.member(5))  # True
print(ex.member(6))  # False

# member() 2 parametre almasına rağmen, 1 parametre verdiğimizde hata vermiyor.
# bunun sebebi ex'ten sonraki nokta operatörü ile member() fonksiyonunu çağırmamız.
# yani bizatihi member()'ın kendisini (hence the name 'self').

ex.remove(5) # {3,4}


