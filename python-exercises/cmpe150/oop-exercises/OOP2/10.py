class Item:
    all = list()  # list to hold all the instances

    def __init__(self, name, age):
        self.name = name
        self.age = age
        Item.all.append(self)


item1 = Item("bugra", 10)
item2 = Item("cemre", 20)
item3 = Item("ahmet", 30)

for ins in Item.all:
    print(ins.name, end=' -> ')
    print(ins.age)

"""
bugra -> 10
cemre -> 20
ahmet -> 30
"""
