# class attributeları görmüştük, sınıfın altında direkt tanımladıgımız
# değişkenler. instance attribute'larda ise direkt tanımlayamiyoruz
# __init__() ve self yapılarına ihtiyaç duyuyoruz. kullanımı şöyle

class Person():
    def __init__(self):  # ilk parametre her zaman self olmak zorundadır
        self.yetenekler = ['c', 'cpp']
        print(self.yetenekler)


# class attribute tanımladıgımız zaman örnekleme yapmasak bile print'ler
# otomatik olarak çalışıyordu. instance attribute'larda ise durum böyle değil
# muhakkak örneklemek zorundayiz.
# ayrıca CA'larda ()'siz çalıştırıyorduk, IA'larda ise () zorunlu
ben = Person()
