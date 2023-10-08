""" Question 52
Define a class named Circle which can be constructed by a radius. The Circle class has a
method which can compute the area.
Hints:
Use def methodName(self) to define a method. """


class Circle(object):
    def __init__(self, r):
        self.radius = r

    def area(self):
        return self.radius**2*3


myCircle = Circle(5)
print(myCircle.area())
