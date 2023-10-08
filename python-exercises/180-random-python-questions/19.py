""" Question
A robot moves in a plane starting from the original point (0,0). The robot can move toward
UP, DOWN, LEFT and RIGHT with a given steps. The trace of robot movement is shown as the
following:
UP 5
DOWN 3
LEFT 3
RIGHT 2
The numbers after the direction are steps. Please write a program to compute the distance
from current position after a sequence of movement and original point. If the distance is
a float, then just print the nearest integer. """

import math

print('Enter UP, DOWN, LEFT and RIGHT values:')
up = int(input('UP: '))
down = int(input('down: '))
left = int(input('left: '))
right = int(input('right: '))


def calculate_hypotenus(a, b):
    hypotenuse = math.sqrt(a**2 + b**2)
    if isinstance(hypotenuse, float):
        return round(hypotenuse)
    else:
        return hypotenuse


start_location = [0, 0]
start_location[0] += up
start_location[1] += right
start_location[0] -= down
start_location[1] -= left
abs_loc = [abs(i) for i in start_location]


print(calculate_hypotenus(abs_loc[0], abs_loc[1]))

