""" Write a function that takes three integers as input and returns True if those integers
don't share a common divisor other than 1, False otherwise.
You may assume that the input will always be positive integers (No need to
implement negative checks). """


def divs(x):
    return [i for i in range(2, x + 1) if (x % i == 0)]


def hasCommonDiv(x, y, z):
    divs_x, divs_y, divs_z = divs(x), divs(y), divs(z)
    for elem in divs_x:
        if elem in divs_y and elem in divs_z:
            return True
    return False


def fun():
    nums = input("enter 3 nums: ")

    nums = nums.split(",")
    x = int(nums[0])
    y = int(nums[1])
    z = int(nums[2])

    if hasCommonDiv(x, y, z):
        return False
    return True


while 1:
    print(fun())

""" çok daha kolay çözümü

def gcd(a, b):
	while (y):
		x = y
  		y = x % y
	return x

def fun(a, b, c):
	x1 = gcd(a, b)
	x2 = gcd(x1, c)

	return (x2 == 1)


"""
