def my_decorator(func):
    def wrapper():
        print("Before function")
        func()
        print("After function")
    return wrapper


@my_decorator
def my_function():
    print("Inside function")
