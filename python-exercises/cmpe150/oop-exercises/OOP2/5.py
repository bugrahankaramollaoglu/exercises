# assert

class Item:
    def __init__(self, name: str, price: float, quantity: int):
        # assertings (checkings/validations). as 2nd parameter, errorMessage belirleyebilirsin
        assert quantity >= 0, f"{quantity} girdin. negatif olamaz"
        assert price <= 10000, f"{price} girdin. 10.000 altında girilmeli"

        # assingings
        self.name = name
        self.price = price
        self.quantity = quantity


x = Item("iphone11", 1500, -5)  # özel hata verir
x = Item("iphone11", 40000, 5)  # özel hata verir

print(x.name)
print(x.price)
print(x.quantity)
