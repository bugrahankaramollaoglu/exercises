""" Write a program, which will find all such numbers between 1000 and 3000
(both included) such that each digit of the number is an even number.The
numbers obtained should be printed in a comma-separated sequence on a single
line. """


def isEachDigitEven(n):
    digits = list(map(int, str(n)))
    for i in digits:
        if (i % 2 == 1):
            return 0
    return 1


def fun():
    evenNums = list()
    for i in range(1000, 3001):
        if (isEachDigitEven(i) == 1):
            evenNums.append(str(i))
    print(", ".join(evenNums))


fun()

""" lambdali hali

lst = [str(i) for i in range(1000, 3001)]
lst = list(filter(lambda i: all(ord(j) % 2 == 0 for j in i), lst))
print(", ".join(lst))
"""

# all() function in python takes an iterable dataType and returns true
# if all the elements of the data returns true from the function that all() takes
# as a parameter

