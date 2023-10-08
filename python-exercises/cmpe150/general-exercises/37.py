import math


def pascal(n):
    return [int(math.factorial(n)) / (math.factorial(n-i) *
                                      math.factorial(i)) for i in range(n)]


def pascal2(n):
    return [int(math.comb(n, i)) for i in range(n+1)]


    # C(n, 0), C(n, 1), C(n, 2)
print(pascal(5))
print(pascal2(5))
