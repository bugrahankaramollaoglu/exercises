# belli bir veri tipi alsınlar istiyosan

class Item:
    def __init__(self, name: str, price: float, quantity: int):
        self.name = name
        self.price = price
        self.quantity = quantity


x = Item(1, 100, 14.2)

print(x.quantity)
