""" Use a list comprehension to square each odd number in a list. The list is input
by a sequence of comma-separated numbers """

myList = [str(int(i) ** 2) for i in input().split(", ") if int(i) % 2]

print(", ".join(myList))
