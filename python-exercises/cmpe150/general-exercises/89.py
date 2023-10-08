# function that takes a list of numbers as input and returns
# the sum of all even numbers in the list.

def fun(ls):
    sum = 0
    for i in ls:
        if i % 2 == 0:
            sum += i
    return sum


a = [10, 20, 11, 39]

print(fun(a))
