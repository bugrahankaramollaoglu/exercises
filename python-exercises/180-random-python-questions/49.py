"""  Question 91
By using list comprehension, please write a program to print the list after removing the
0th,4th,5th numbers in [12,24,35,70,88,120,155].
 """

a = [12, 24, 35, 70, 88, 120, 155]

b = list()

for i, i2 in enumerate(a, start=0):
    if (i != 0 and i != 4 and i != 5):
        b.append(i2)

print(b) # [24, 35, 70, 155]

""" böyle de yapabilirdin
li = [x for (i,x) in enumerate(li) if i not in (0,4,5)]
"""
