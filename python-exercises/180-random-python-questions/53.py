""" Question 95
Define a class Person and its two child classes: Male and Female. All classes have a
method "getGender" which can print "Male" for Male class and "Female" for Female class.
Hints:
Use Subclass(Parentclass) to define a child class.
 """


class Person(object):
    def getGender(self):
        return "it's class"


class Male(Person):
    def getGender(self):
        return "Male"


class Female(Person):
    def getGender(self):
        return "Female"


male = Male()
print(male.getGender()) # Male

female = Female()
print(female.getGender()) # Female

asd = Person()
print(asd.getGender()) # it's a class
