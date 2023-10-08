# instance metotları bir instance'ın özelliklerine erişip değiştirebilirken
# class metotları bunu yapamaz

class MyClass:
    def __init__(self):
        self.instanceVariable = 42

    def instanceMethod(self):
        self.instanceVariable += 1  # hata vermez

    @classmethod
    def classMethod(cls):
        cls.instanceVariable += 1  # bu ise hata verir


obj = MyClass()
print(obj.instanceVariable)  # 42
obj.instanceMethod()
obj.instanceMethod()
obj.instanceMethod()
print(obj.instanceVariable)  # 45
obj.classMethod() # arttırmaz
obj.classMethod() # arttırmaz
print(obj.instanceVariable)  # hata
