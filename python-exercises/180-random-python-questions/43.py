""" Question 83
Please write a program to print the running time of execution of "1+1" for 100 times.
Hints:
Use timeit() function to measure the running time """

import timeit

""" usage of timeit()

yani i'ye 1 milyar kere 100 atama işlemini python 10 saniyede yapiyomuş
(aynisi c'de 1.5 saniye ama bu Cython ya da PyPy ile derlenmesine göre
çok değişiyor)

# Define the code to be timed
code = """
1+1
"""

# Measure the execution time
time_taken = timeit.timeit(code, number=1000000000)

print(f"Execution time: {time_taken:.5f} seconds")

"""


# Define the code to be timed
code = """
1+1
"""

# Measure the execution time
time_taken = timeit.timeit(code, number=100000000)

print(f"Execution time: {time_taken:.5f} seconds")

"""
from timeit import Timer

t = Timer("for i in range(100):1+1")

print(t.timeit())

böyle yazınca çok daha yavaş çalışıyor, garip

"""
