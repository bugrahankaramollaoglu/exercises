# inheritance bir sınıfın adını başka bir sınıfın parantezleri
# içerisinde yazılarak o sınıfa kendi özelliklerini vermesidir

class Animal:
    def __init__(self, name, isWild):
        self.name = name
        self.isWild = isWild

    def introduce(self):
        print(f'{self.name} is an animal.')


class Dog(Animal):
    def bark(self):
        print(f'{self.name} is barking.')


x = Animal('max', True)
x.introduce()  # max is an animal

# x.bark()  # hata verir çünkü Animal'de bark() yok

# şimdi y'yi Dog'dan türettiğimiz için hem Dog hem Animal özelliklerine sahip
y = Dog('pearl', False)
y.introduce()
y.bark()
