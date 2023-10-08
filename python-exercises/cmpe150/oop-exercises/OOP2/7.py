# CA'ların alametifarikaları hem instance hem direkt class
# üzerinden erişilebilir olmalarıdır

class Item:
    myCA = 32


x = Item()

print(Item.myCA)  # 32 (via class)
print(x.myCA)  # 32 (via instance/object)
