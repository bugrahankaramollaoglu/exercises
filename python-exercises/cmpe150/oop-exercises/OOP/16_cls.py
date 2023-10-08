# python'da bir class altında tanımladıgın fonksiyonlara metot denir. 3 çeşit metot vardır
# bir instance methods, iki class methods, üc static methods
# pythonda bir instance metot tanımladıgımızda, bunun ilk parametresi self olur
# bu parametre sayesinde metodun çağrıldığı tekil objeye refere edebiliyoruz
# class metodu tanımladıgımızda ise ilk parametresi self değil cls oluyor.
# tek bir objeye değil de tüm classa refere ediyor.
# fakat bu isimler geleneksel olarak öyle adlandırılır

# mesela
class Car():
    numWheels = 4  # class variable

    @classmethod  # class method tanımlamak için buna ihtiyacımız var
    # eğer bunu kullanmazsan sınıf metodu olmaz çünkü ne cls ne self anahtar kelimelerdir
    def getNumWheels(cls):  # class method
        return cls.numWheels  # cls'siz hata verir


myCar = Car()
print(myCar.getNumWheels())  # 4
