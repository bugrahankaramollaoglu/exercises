# fibonacci formula: f(n) = f(n-1) + f(n-2)
# find 10001th fibonacci

# n. fibonacci sayisini verir
def fiboFinder_recursif(n):
    if (n == 1 or n == 2):
        return 1
    else:
        return (fiboFinder_recursif(n-1) + fiboFinder_recursif(n-2))


def fiboFinder_iteratif(n):
    if (n < 2):
        return n
    else:
        prev1 = 0
        prev2 = 1
        for n in range(2, n + 1):
            current = prev1 + prev2
            prev1 = prev2
            prev2 = current
        return current


print(fiboFinder_iteratif(9))
# print(fiboFinder_recursif(100))

""" yukarıdaki kodlardan iteratif olan çalışıyor ama
rekürsif olan çalışmıyor. bunun sebebi çok büyük sayılarda
stack doldugu icin (çünkü recursif çağrılar stackte birikiyor)
hesaplayamıyor. """
