""" Write a function to compute 5/0 and use try/except to catch the exceptions. """

try:
    print(5/0)
except:
    raise ZeroDivisionError
