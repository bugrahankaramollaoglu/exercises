""" Define a function which can print a dictionary where the keys are numbers
between 1 and 20 (both included) and the values are square of keys. """


def fun():
    a = {}
    for i in range(1, 21):
        a[i] = i**2
    print(a)


# or

def fun2():
    b = {i: i ** 2 for i in range(1, 21)}
    print(b)


fun()
fun2()
