""" Question:
Write a program that calculates and prints the value according to the given formula:
Q = Square root of [(2 * C * D)/H]
Following are the fixed values of C and H:
C is 50. H is 30.
D is the variable whose values should be input to your program in a comma-separated
sequence. """

import math
myStr = input("enter: ")

lis = list(myStr.split(','))
resultLis = list()


def formula(n):
    return math.sqrt(int((2*50*int(n))/30))


for i in range(len(lis)):
    resultLis.append(formula(lis[i]))

for i in range(len(resultLis)):
    if i == len(resultLis) - 1:
        # if it's the last number, don't print the comma
        print(int(resultLis[i]), end="")
    else:
        # for other numbers, print with comma separator
        print(int(resultLis[i]), end=",")

print('\n')

""" çok daha kısası

import math
value = []
items = [x for x in input().split(',')]
for d in items:
    value.append(str(int(round(math.sqrt(2*50*float(d)/30)))))
print(','.join(value))

"""
