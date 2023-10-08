# Define a class, which have a class parameter and have a same instance parameter.

class MyClass:
    # class level attribute
    # This attribute belongs to the class itself
    # rather than any specific instance of the class.
    name = "buğrahan"

    """ The __init__() method is the constructor
        method for the class MyClass, which is
        called when a new instance of the class
        is created. This method takes an optional parameter
        name, which can be used to set the value of the
        instance-level attribute name. If the name
        parameter is not provided, the instance-level
        attribute name defaults to None """

    def __init__(self, name=None):
        # instance level attribute
        self.name = name


bugra = MyClass("bugrahan")
print(MyClass.name)  # buğrahan
print(bugra.name)  # bugrahan
