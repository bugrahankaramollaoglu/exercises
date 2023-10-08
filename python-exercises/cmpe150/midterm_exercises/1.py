# Write a Python program that takes a list of integers as input and returns
# the largest product that can be made by multiplying any three integers.
# For example, if the input list is [1, 2, 3, 4], the output
# should be 24 (which is 3 times 4 times 2).

# that is, if there is no negative
def fun(numList):
    numList2 = sorted(numList)
    res = 1
    numList3 = numList2[-3:]
    for i in range(3):
        res *= numList3[i]
    return res


print(fun([1, 2, 30, 4, 0,  5, 3]))
