# list

ls = [10, 20, "bugra", 30.42]

# print(ls) ya da döngülü hâli

for i in range(1, len(ls)):
    print(ls[i])

# lists differ from tuples in that lists are mutable
# while tuples are immutable. for instance you can say

myList = [10, 20, 30]
myList[1] = 15

# but you cannot say

myTuple = (10, 20, 30)
myTuple[1] = 15  # hata
