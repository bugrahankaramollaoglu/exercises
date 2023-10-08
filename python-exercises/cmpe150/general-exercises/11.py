def fibonacci_iteartive(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        a = 0
        b = 1
        for i in range(2, n+1):
            c = a + b
            a = b
            b = c
        return b


print(fibonacci_iteartive(1))
print(fibonacci_iteartive(2))
print(fibonacci_iteartive(3))
print(fibonacci_iteartive(4))
print(fibonacci_iteartive(5))
print(fibonacci_iteartive(6))
