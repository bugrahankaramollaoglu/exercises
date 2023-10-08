""" Question:
Write a program which can compute the factorial of a given numbers.
The results should be printed in a comma-separated sequence on a single line.
Suppose the following input is supplied to the program """

def factorial(n):
    if (n == 0):
        return 1
    return (n * factorial(n-1))

# ya da

def factorial2(n):
    if (n == 0):
        return 1
    res = 1
    for i in range(1, n+1):
        res = res * i
    return res


print(factorial(4))
print(factorial2(4))
