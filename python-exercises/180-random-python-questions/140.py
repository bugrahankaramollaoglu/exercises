import math

""" A robot moves in a plane starting from the original point (0,0). The robot can
move toward UP, DOWN, LEFT and RIGHT with a given steps. The trace of
robot movement is shown as the following:
• UP 5
• DOWN 3
• LEFT 3
• RIGHT 2
The numbers after the directions are steps. Please write a program to compute
the distance from current position after a sequence of movement and original
point. If the distance is a float, then just print the nearest integer.  """


x, y = 0, 0

while (1):
    up = int(input("enter up steps: "))
    down = int(input("enter down steps: "))
    left = int(input("enter left steps: "))
    right = int(input("enter right steps: "))

    x += up
    x -= down
    y += right
    y -= left

    x = abs(x)
    y = abs(y)

    distanceFromBeginning = math.sqrt((x**2) + (y**2))

    print("you are {} steps away from the beginning.".format(distanceFromBeginning))
    print("type exit to exit")
