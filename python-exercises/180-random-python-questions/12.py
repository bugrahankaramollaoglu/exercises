""" Question:
Write a program, which will find all such numbers between 1000 and 3000 (both included)
such that each digit of the number is an even number. The numbers obtained should be
printed in a comma-separated sequence on a single line. """


def isAllEven(n):
    flag = 1
    while (n):
        if ((n % 10) % 2 == 0):
            flag = 0
        n //= 10
    if (flag == 0):
        return 0
    return 1

myLis = []

for i in range(1000, 3001):
    if (isAllEven(i) == 1):
        myLis.append(str(i))

""" ya da
for i in range(1000, 3001):
	s = str(i)
	if (int(s[0])%2==0) and (int(s[1])%2==0) and (int(s[2])%2==0) and (int(s[3])%2==0):
		values.append(s)
"""

# böylece sonuna , koymuyor
print(",".join(myLis))
