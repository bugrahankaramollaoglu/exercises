# kullanırsan

class Item:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity


x = Item("iphone11", 1500, 5)

print(x.name)  # iphone11
print(x.price)  # 1500
print(x.quantity)  # 3
