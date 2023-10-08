def findDivs(n1, n2):
    divs = ()
    for i in range(1, min(n1, n2) + 1):
        if (n1 % i == 0) and (n2 % i == 0):
            divs += (i, )
    return divs


# print common divisors
divs = findDivs(120, 310)
print(divs)

# print sum of common divisors
total = 0
for i in divs:
    total += i

print(total)
