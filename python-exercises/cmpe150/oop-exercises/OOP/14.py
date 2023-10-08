# yarattığımız örneklerle (objelerle) yalnızca IA'lara değil CA'lara da erişebiliyoruz

class Person():
    a = 30  # class attribute

    def __init__(self):
        self.b = 50  # instance attribute


ben = Person()
# print(ben.a)  # 30
# print(ben.b)  # 50

# peki aynı isimde hem bir IA hem CA varsa? hangisini alir? (IA'yi alir)


class Person():
    a = 30

    def __init__(self):
        self.a = 50


ben = Person()
print(ben.a)  # 50

# aramaya önce __init__()'te başlar sonra CA'ya bakar

# eğer IA olanı değil de CA olan değişkeni yazdirmak istiyosan sınıfın adıyla çağırmalısın
print(Person.a)  # 30
