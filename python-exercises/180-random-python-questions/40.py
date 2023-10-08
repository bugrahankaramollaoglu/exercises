""" Question 78
Please write a program to generate a list with 5 random numbers between 100 and 200
inclusive.
Hints:
Use random.sample() to generate a list of random values. """

import random

print(random.sample([i for i in range(100,201)], 5))

""" usage of random.sample()
The random.sample() function is a method provided
by the random module in Python that allows you to
randomly select a sample of items from a list,
tuple, or other iterable, without replacement.
sample()'ı sözlüklerle kullanamiyosun (çünkü tam anlamiyla
iterable değiller, onun yerine sözlüğün keyleriyle kullanabiliyosun)

import random
my_dict = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}

random_keys = random.sample(list(my_dict.keys()), 2)

for key in random_keys:
    print(key, my_dict[key])

"""



