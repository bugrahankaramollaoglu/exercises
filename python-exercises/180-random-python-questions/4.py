""" Question:
Write a program which accepts a sequence of comma-separated numbers from console and
generate a list and a tuple which contains every number. """

myStr = input("enter your nums: ")
myList = list(myStr.split(','))
myTuple = tuple(myList)
print(myList)
print(myTuple)
