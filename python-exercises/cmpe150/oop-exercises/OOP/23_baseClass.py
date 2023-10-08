# birden fazla sınıfın ortak özellikleri tek bir sınıfta birleştirilebilir
# bu sınıfa base/super/parent class denir

# mesela şöyle classlar var

class Toyota:
    def __init__(self, model, yıl):
        self.model = model
        self.yıl = yıl

    def hareketEt(self):
        print('hareket ediyor...')

    def dur(self):
        print('duruyor...')


class Honda:
    def __init__(self, model, yıl):
        self.model = model
        self.yıl = yıl

    def hareketEt(self):
        print('hareket ediyor...')

    def dur(self):
        print('duruyor...')

# bunları şöyle birleştirebiliriz


class Car:
    def __init__(self, model, yıl):
        self.model = model
        self.yıl = yıl

    def hareketEt(self):
        print('hareket ediyor...')

    def dur(self):
        print('duruyor...')
