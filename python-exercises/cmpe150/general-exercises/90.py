# Write a Python program that takes a string as input
# and returns the number of uppercase letters in the string.

import string


def fun(n):
    counter = 0
    for ch in n:
        if (ch.isupper()):
            counter += 1
    return counter


print(fun("bugraKARA"))
