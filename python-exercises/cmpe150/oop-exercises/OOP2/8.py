class Item:
    ca1 = 10
    ca2 = "bugra"
    ca3 = 30.5

    def __init__(self, name, age, kilo):
        self.name = name
        self.age = age
        self.kilo = kilo


x = Item("bugra", 32, 120)

# bir class ya da instancetaki tüm attribute'ları (değişkenleri)
# görmek için __dict__() kullan

print(Item.__dict__)  # CA'ları gösterir
print(x.__dict__)  # IA'ları gösterir
