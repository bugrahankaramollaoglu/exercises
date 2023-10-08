# Write a Python program that takes a list of numbers as
# input and returns a new list containing only
# the prime numbers in the input list.

def isPrime(n):
    if (n == 0 or n == 1):
        return 0
    elif (n == 2):
        return 1
    else:
        for i in range(2, n):
            if (n % i == 0):
                return 0
        return 1


def fun(a):
    l2 = []
    for i in a:
        if (isPrime(i)):
            l2.append(i)
    return l2


a = [10, 11, 13, 15, 19, 20]
print(fun(a))
