""" With two given lists [1,3,6,78,35,55] and [12,24,35,24,88,120,155], write a pro-
gram to make a list whose elements are intersection of the above lists """

l1 = [1, 3, 6, 78, 35, 55, 24]
l2 = [12, 24, 35, 24, 88, 120, 155]


l3 = l1 + l2

l3 = [i for i in l3]
l3 = list(set(l3))
l3 = [i for i in l3 if i in l1 and i in l2]
print(l3)
