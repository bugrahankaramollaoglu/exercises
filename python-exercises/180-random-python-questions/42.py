"""  Question 81
Please write a program to randomly print a integer number between 7 and 15 inclusive.
Hints:
Use random.randrange() to a random integer in a given range. """

import random

print(random.randrange(7, 16))

""" randrange() kullanımı

random.randrange([start], stop[, step])

# Generate a random integer between 0 and 9 (inclusive)
num1 = random.randrange(10)
print(num1)

# Generate a random even integer between 0 and 100 (exclusive)
# 2şer arttırıyor ama 0'dan başlattığın için sadece evenları aliyor
num2 = random.randrange(0, 100, 2)
print(num2)

# Generate a random odd integer between 1 and 10 (inclusive)
# 2şer arttırıyor ama 1'den başlattığın için sadece oddları aliyor
num3 = random.randrange(1, 11, 2)
print(num3)

"""

