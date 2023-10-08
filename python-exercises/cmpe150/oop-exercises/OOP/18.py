# bir diğer farkları çağrılma şekilleridir

class MyClass:
    def instance_method(self):
        print("This is an instance method")

    @classmethod
    def class_method(cls):
        print("This is a class method")


my_object = MyClass() # instance yarattık

my_object.instance_method()  # instance metodu çağırırken instance üzerinden çağırırız
MyClass.class_method()  # class metodu çağırırken class üzerinden çağırırız
