""" Question 76
Please write a program to output a random even number between 0 and 10 inclusive using
random module and list comprehension.
Hints:
Use random.choice() to a random element from a list """

import random

print(random.choice([i for i in range(1, 11) if i % 2 == 0]))

""" usage of random.choice()
The random.choice() function is a method
provided by the random module in Python
that allows you to randomly select an
item from a list, tuple, or other iterable.

import random

a = (1,325,63,32,2363,932)

print(random.choice(a)) # a'dan random veri alir

"""


