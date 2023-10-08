# default değer verebilirsin

class Item:
    def __init__(self, name, price, quantity=0):
        self.name = name
        self.price = price
        self.quantity = quantity


x = Item("iphone11", 1500)  # hata vermez
print(x.quantity)  # 0
