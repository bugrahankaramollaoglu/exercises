# fibonacci

def recursive_fib(n):
    if (n < 2):
        return n
    else:
        return recursive_fib(n - 1) + recursive_fib(n - 2)


def iterative_fib(n):
    if (n < 2):
        return n
    else:
        prev1 = 0
        prev2 = 1
        for i in range(2, n + 1):
            current = prev1 + prev2
            prev1 = prev2
            prev2 = current
        return current


a = iterative_fib(9)
print(a)
