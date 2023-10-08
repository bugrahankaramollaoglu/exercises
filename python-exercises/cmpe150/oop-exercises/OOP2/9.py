# bir instance içinden bir CA'ya direkt erişemezsin

class Item:
    discount = 200

    def __init__(self, price):
        self.price = price

    def fun(self):
        self.price = self.price - self.discount  # direkt discount diyemiyosun
        # eğer bu discount'ı self değil de Item (class) üzerinden çağırırsan (Item.discount)
        # objelere özel olarak değiştiremezsin, her seferinde class'taki CA'yı alır
        print(self.price)


x = Item(1200)
x.fun()  # 1000 (1200-200) (self.price - Item.discount)

# objelere özel olarak CA'yı değiştirebilirsin
y = Item(1200)
y.discount = 400  # y objesinin CA'sı 200 değil 400 oldu
y.fun()  # 800
