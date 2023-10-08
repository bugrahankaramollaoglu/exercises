""" Define a class Person and its two child classes: Male and Female. All classes
have a method ”getGender” which can print ”Male” for Male class and ”Female”
for Female class. """


class Person:
    def getGender(self):
        return 0


class Male(Person):
    def getGender(self):
        return "male"


class Female(Person):
    def getGender(self):
        return "female"
