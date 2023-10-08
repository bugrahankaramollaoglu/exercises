def fac(n):
    if (n == 1):
        return n
    return (n * fac(n-1))


list2 = [2, 3, 4, 5]
list2 = [fac(i) for i in list2]

print(list2)
