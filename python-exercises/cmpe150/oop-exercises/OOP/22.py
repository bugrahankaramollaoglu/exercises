# hidden objects in python

# bir değişkeni gizli yapmak için başına iki tane _ koyarsın
# sonunda opsionel maksimum bir adet _ olabilir

class Sınıf:
    __myHid = 'hidden'
    __myHid2 = 'hidden too'

    def instanceMethod(self):
        print(self.__myHid)
        print(self.__myHid2)
        # print('instance method')

    @classmethod
    def classMethod(cls):
        print('sınıf metodu')

    @staticmethod
    def staticMethod():
        print('static method')


# bu tür gizli örneklere sınıf üzerinden ya da instance üzerinden erişemezsin
a = Sınıf()
# print(a.__myHid)  # hata verir
# print(Sınıf.__myHid2)  # hata verir

# gizli örneklere sınıf dışından erişemeyiz ama içinden erişiriz.
# instanceMethod()'da eriştik
print(a.instanceMethod()) # myHid1 ve 2'yi yazdırır

# yarı gizli üyelerin başında ise tek _ bulunur
