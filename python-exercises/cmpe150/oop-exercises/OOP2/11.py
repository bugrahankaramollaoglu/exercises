# __repr__()

class Item:
    all = list()  # list to hold all the instances

    def __init__(self, name, age):
        self.name = name
        self.age = age
        Item.all.append(self)

    def __repr__(self):
        return f"Item('{self.name}', '{self.age}')"


item1 = Item("bugra", 10)
item2 = Item("cemre", 20)
item3 = Item("ahmet", 30)

print(Item.all[2])  # bu ifade user-friendly değildir
# bunun için __repr__ magic function kullanabiliriz
