# ekok bulma

import math


def ekok(n, m):
    maxOf = max(n, m)
    for i in range(maxOf, n*m+1):
        if (i % n == 0 and i % m == 0):
            return i


print(ekok(120, 100))
