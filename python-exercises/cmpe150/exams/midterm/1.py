
def divisors(n):
    a = list()
    for i in range(2, n+1):
        if (n % i == 0):
            a.append(i)
    return a


def fun(a, b, c):
    divA = divisors(a)
    divB = divisors(b)
    divC = divisors(c)

    for i in divA:
        if i in divA and i in divB and i in divC:
            return False
    for i in divB:
        if i in divA and i in divB and i in divC:
            return False
    for i in divC:
        if i in divA and i in divB and i in divC:
            return False
    return True


x = fun(60, 144, 96)
print(x)


""" gcd() ile kolay çözüm

def gcd(a, b):
	while (y):
		x = y
  		y = x % y
	return x

def fun(a, b, c):
	x1 = gcd(a, b)
	x2 = gcd(x1, c)

	return (x2 == 1)

"""
