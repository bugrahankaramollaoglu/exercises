""" Define a class, which have a class parameter and have a same instance parame-
ter. """


class MyClass:
    name = "my name"

    def __init__(self, name=None):
        self.name = name


x = MyClass("bugrahan")
print(x.name) # bugrahan
