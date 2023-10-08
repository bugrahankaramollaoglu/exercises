""" Define a class which has at least two methods: - getString: to get a string
from console input - printString: to print the string in upper case. """


class MyClass:
    def __init__(self):
        pass

    def getString(self):
        self.inp = input()

    def printString(self):
        print(self.inp.upper())


aa = MyClass()
aa.getString()  # bugra
aa.printString()  # BUGRA
