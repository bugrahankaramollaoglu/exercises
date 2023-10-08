""" Question 84
Please write a program to shuffle and print the list [3,6,7,8].
Hints:
Use shuffle() function to shuffle a list. """

import random

myList = [3, 6, 8, 23, 10]

# The random.shuffle() function shuffles a list
# in place, meaning it doesn't return a new
# shuffled list but instead modifies the original
# list. Therefore, when you print the result of
# random.shuffle(myList), it returns None because
# the function doesn't return anything.
print(random.shuffle(myList)) # None

# o yüzden
random.shuffle(myList)
print(myList)  # [3, 6, 23, 10, 8]
