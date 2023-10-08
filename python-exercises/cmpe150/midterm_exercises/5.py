# Write a Python function that takes two lists
# of integers as input and returns a new list that
# contains only the elements that appear in
# both lists. For example, if the input lists
# are [1, 2, 3] and [2, 3, 4], the output should be [2, 3].

def fun(l1, l2):
    l3 = [i for i in l1 if i in l2]
    return l3


print(fun([1, 5, 2, 3], [2, 3, 4, 5]))
