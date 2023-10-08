from operator import add, mul


def square(x):
    return mul(x, x)


def curry(f):
    def g(x):
        return lambda y: f(x, y)
    return g


add(4, square(print(2)))
