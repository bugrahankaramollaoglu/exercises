# instance methods

class DenemeClass():
    myList = []

    def __init__(self, eleman):
        self.eleman = eleman
        self.elemanSayisi = 0
        self.elemanEkle()

    def elemanEkle(self):
        self.myList.append(self.eleman)
        print('{} elemanı myList\'e eklendi'.format(self.eleman))

    def printList(self):
        print('\nelements of the list:')
        for elem in self.myList:
            print(elem)

    def printElemanSayisi(self):
        print('\nnumber of elements:')
        print(len(self.myList))


obj1 = DenemeClass('ahmet')
obj2 = DenemeClass('mehmet')
obj3 = DenemeClass('ali')

obj1.printList()  # ahmet mehmet ali yazdırır. her bir eleman class'tan
# türediginden hangi objeyi cagirdiginin bir önemi yoktur

obj1.printElemanSayisi()  # 3

# bir önemli ayrinti şudur: burada class değil instance methodlari (fonksiyonları) vardir.
# o yüzden şu ifade hata verir
DenemeClass.printList()
# çünkü instance method'lara yalnızca bir instance üzerinden erişebilirsin

