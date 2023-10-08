""" Write a program to generate and print another tuple whose values are even
numbers in the given tuple (1,2,3,4,5,6,7,8,9,10). """

tpl = tuple(i for i in range(1, 11) if i % 2 == 0)

print(tpl)
