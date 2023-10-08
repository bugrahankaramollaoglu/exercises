""" fibonacci """


def fibo(n):
    if (n < 2):
        return n
    return fibo(n-1)+fibo(n-2)


print(fibo(0))
print(fibo(1))
print(fibo(2))
print(fibo(3))
print(fibo(4))
print(fibo(5))
print(fibo(6))
