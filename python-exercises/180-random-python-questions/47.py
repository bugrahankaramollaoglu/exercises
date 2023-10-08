""" Question 89
By using list comprehension, please write a program to print the list after removing the
0th, 2nd, 4th,6th numbers in [12,24,35,70,88,120,155].
Hints:
Use list comprehension to delete a bunch of element from a list.
Use enumerate() to get (index, value) tuple.
 """

a = [10, 20, 30, 40, 50, 60, 70, 80]
ls = list()
for i, item in enumerate(a, start=0):
    if (i != 0 and i != 2 and i != 4 and i != 6):
        ls.append(item)
print(ls)
