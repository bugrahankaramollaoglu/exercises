""" Write a program which accepts a sequence of comma-separated numbers from
console and generate a list and a tuple which contains every number.Suppose
the following input is supplied to the program:
 """


def fun():
    nums = input("please enter numbers: ")
    nums = nums.split(", ")
    numsTup = tuple(nums)

    print(nums)
    print(numsTup)


fun()
