""" By using list comprehension, please write a program to print the list after re-
moving the 0th, 4th, 5th numbers in [12,24,35,70,88,120,155]. """

lst = [12, 24, 35, 70, 88, 120, 155]
lst = [lst[i] for i in range(len(lst)) if i not in (0, 4, 5)]
print(lst)
