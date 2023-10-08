import datetime


""" Alternative constructors in Python provide a way to create
instances of a class using different sets of input parameters
than the ones required by the main constructor.
a class method used as alternative constructor: """


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def from_birth_year(cls, name, birth_year):
        age = datetime.date.today().year - birth_year
        return cls(name, age)


# To create a new instance using this alternative constructor,
# we can call the class method directly on the class, like this:
person = Person.from_birth_year('Bugra', 2001)
print(person.name)  # bugra
print(person.age)   # 22


person2 = Person.from_birth_year('cemre', 2011)
print(person2.name)  # cemre
print(person2.age)   # 12
