""" Write a program to compute: f(n) = f(n - 1) + 100, n>0 with a given n
input by console """


def f(n):
    if (not n):
        return 0
    return (f(n-1) + 100)


a = f(5)
print(a)

