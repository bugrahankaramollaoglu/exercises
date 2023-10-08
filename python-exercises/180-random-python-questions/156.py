""" Define a class named Circle which can be constructed by a radius. The Circle
class has a method which can compute the area. """


class Circle():
    def __init__(self, r):
        self.radius = r

    def calculateArea(self):
        return 3 * (self.radius ** 2)


x = Circle(5)
print(x.calculateArea())
