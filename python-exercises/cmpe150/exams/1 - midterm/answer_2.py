"""  Write a Python program that prompts the user to enter an integer n and prints out a
list of all Pythagorean triplets with simplified values where hypotenuse is less than n.
A Pythagorean triplet is a triplet of integers, a, b, and c such that a^2 + b^2 = c^2.
Some of the examples are (3, 4, 5) and (5, 12, 13).
The printed list must consist of Pythagorean triplets represented with tuples, and the
numbers of the triplet must be in non-decreasing order in the tuple.
The printed list can be in any order.
The Pythagorean triplets must be simplified, meaning that a, b, and c must not share
a common divisor other than. Ex: (3, 4, 5) is valid while (6, 8, 10), (9, 12, 15)… are
invalid.

30 -> [(3, 4, 5), (5, 12, 13), (8, 15, 17), (7, 24,25), (20, 21, 29)] """

import math


def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def simplify_triplet(triplet):
    a, b, c = triplet
    common_divisor = gcd(a, gcd(b, c))
    return (a // common_divisor, b // common_divisor, c // common_divisor)


def generate_pythagorean_triplets(n):
    triplets = []
    for a in range(1, n):
        for b in range(a, n):
            c = math.sqrt(a**2 + b**2)
            if c.is_integer() and c < n:
                triplet = simplify_triplet((a, b, int(c)))
                triplets.append(tuple(sorted(triplet)))
    return list(set(triplets))  # Remove duplicates


def main():
    try:
        n = int(input("Enter an integer n: "))
        if n < 3:
            print("Please enter a value of n greater than or equal to 3.")
        else:
            result = generate_pythagorean_triplets(n)
            sorted_result = sorted(
                result, key=lambda triplet: triplet[2]
            )
            print(sorted_result)
    except ValueError:
        print("Invalid input. Please enter a valid integer.")


if __name__ == "__main__":
    main()
