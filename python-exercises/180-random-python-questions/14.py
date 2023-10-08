""" Question:
Write a program that computes the value of a+aa+aaa+aaaa with a given digit as the value
of a. Suppose the following input is supplied to the program:
9. Then, the output should be: 11106 """

rep = int(input())


def repeat_digit2(digit):
    number = digit * 10 + digit * 1
    return number


def repeat_digit3(digit):
    number = digit * 100 + digit * 10 + digit * 1
    return number


def repeat_digit4(digit):
    number = digit * 1000 + digit * 100 + digit * 10 + digit * 1
    return number


print(repeat_digit4(rep) + repeat_digit3(rep) + repeat_digit2(rep) + rep)
