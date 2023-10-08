# Write a Python program that takes a list of integers
# as input and returns a new list with all the duplicates
# removed. For example, if the input list is [1, 2, 2, 3, 4, 4, 4, 5],
# the output should be [1, 2, 3, 4, 5].

def fun(l):
    return (list(set(l)))

print(fun([1, 2, 2, 3, 4, 4, 4, 5]))
