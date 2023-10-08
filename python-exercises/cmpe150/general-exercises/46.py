# find median of a list

myList = []
i = 1
while (i < 7):
    elem = input('enter {}. element: '.format(i))
    myList.append(elem)
    i += 1

myList = [int(x) for x in myList]
myList.sort()
n = len(myList)
myList.append(8)
if (n % 2) == 0:
    med = (myList[n//2] + myList[n//2 - 1]) / 2
else:
    med = myList[n//2]

print(med)
