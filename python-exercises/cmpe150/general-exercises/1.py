# sayfa 29

x = int(input("enter x: "))
y = int(input("enter y: "))
z = int(input("enter z: "))

list = []
if (z % 2 == 1):
    list.append(z)
if (y % 2 == 1):
    list.append(y)
if (x % 2 == 1):
    list.append(x)

print(f"{len(list)} adet odd girdin. en büyükleri {max(list)}")
