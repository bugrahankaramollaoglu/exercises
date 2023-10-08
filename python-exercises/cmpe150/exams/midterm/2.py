
import math


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def is_coprime(a, b):
    return gcd(a, b) == 1


def get_pythagorean_triplets(n):
    triplets = []
    for a in range(1, n):
        for b in range(a, n):
            c = math.sqrt(a**2 + b**2)
            if c > n:
                break
            if c.is_integer() and is_coprime(a, b):
                triplets.append((a, b, int(c)))
    return triplets


n = int(input("Enter an integer n: "))
triplets = get_pythagorean_triplets(n)
print(triplets)
