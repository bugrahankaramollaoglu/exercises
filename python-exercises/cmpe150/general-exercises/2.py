# sayfa 33

i = 0
list = []
while (i < 3):
    a = int(input("enter: "))
    list.append(a)
    i += 1
i = 0

odd_list = []

for i in list:
    if (i % 2 == 1):
        odd_list.append(i)
    i += 1

if (not odd_list):
    print("odd sayi yok!")
else:
    print("max odd: {}".format(max(odd_list)))
