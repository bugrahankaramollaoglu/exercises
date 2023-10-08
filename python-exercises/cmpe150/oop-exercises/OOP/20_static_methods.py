""" instance özelliklerine erişmemiz gerekince instance, classınkilere gerekince
class methods kullanıyoduk. hiçbirine erişmemiz gerekmiyosa da statik metotları kullanacagız
tıpkı class methodlar gibi @staticmethod decorator'ıyla kullanılır. """


class MyClass:
    classAttr = 0

    def __init__(self, data):
        self.data = data

    # instance method
    def fun(self):
        return self.data

    # class method
    @classmethod
    def fun2(cls):
        return cls.classAttr

    # static method
    @staticmethod
    def fun3():
        print('hi')

""" Bu metotlar sınıf metotlarına çok benzer. Tıpkı sınıf metotlarında olduğu
gibi, anlamsal olarak  sınıfla ilgili olan, ancak sınıf metotlarının aksine
bu sınıfın herhangi bir niteliğine erişmesine  gerek olmayan fonksiyonları,
sınıf dışına atmak yerine, birer statik metot olarak sınıf içine  yerleştirebiliriz. """
