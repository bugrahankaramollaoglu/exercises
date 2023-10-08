def factorial_iterative(n):
    res = 1
    while (n > 1):
        res = res * n
        n -= 1
    return res

def factorial_recursive(n):
    if (n == 1):
        return n
    return (n * factorial_recursive(n-1))

a = factorial_recursive(4)
b = factorial_iterative(4)
print(a)
print(b)
