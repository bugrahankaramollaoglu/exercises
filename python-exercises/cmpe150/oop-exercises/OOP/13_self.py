# self, bir sınıfın örneklerini temsil eder.
# adı self olmak zorunda değildir, ilk parametre olması yeterlidir.

class Person():
    def __init__(self):
        self.yetenekler = ['c', 'cpp'] # self'siz yazarsan hata verir


ben = Person()
print(ben.yetenekler)
