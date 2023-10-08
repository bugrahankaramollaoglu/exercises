""" Define a class named Shape and its subclass Square. The Square class has an init
function which takes a length as argument. Both classes have a area function
which can print the area of the shape where Shape’s area is 0 by default. """

class Shape():
	def __init__(self):
		pass

	def area(self):
		return (0)

class Square(Shape):
	def __init__(self, len):
		self.len = len

	def area(self):
		return self.len**2

shape = Shape()
print("Area of Shape:", shape.area())  # 0

square = Square(5)
print("Area of Square:", square.area())  # 25

