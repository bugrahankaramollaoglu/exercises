""" Question 93
With two given lists [1,3,6,78,35,55] and [12,24,35,24,88,120,155], write a program to
make a list whose elements are intersection of the above given lists.
 """


a = [1, 3, 6, 78, 35, 55]
b = [12, 24, 35, 24, 88, 120, 155]

a = set(a)
b = set(b)

inters = a.intersection(b)

print(list(inters))

# ya da

a &= b
print(list(a))
