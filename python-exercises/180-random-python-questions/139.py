""" Define a class with a generator which can iterate the numbers,
which are divisible by 7, between a given range 0 and n. """


class MyClass:
    def gen(self, num):
        for i in range(0, num+1):
            if (i % 7 == 0):
                yield i


a = MyClass()

ls = a.gen(35)
print(list(ls))
