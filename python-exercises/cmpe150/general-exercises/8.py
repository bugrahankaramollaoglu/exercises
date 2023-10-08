def prime_find(n):
    i = 2
    if (n == 1 or n == 0):
        return 0
    while (i < n):
        if (n % i == 0):
            return 0
        else:
            i += 1
    return 1


def program(m):
    i = 0
    list = []
    while (i < m):
        if (prime_find(i) == 1):
            list.append(i)
        i += 1
    print(list)

program(20)
