"""ebob bulma"""

# define a function
def compute_hcf(x, y):

# choose the smaller number
    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            hcf = i
    return hcf

num1 = int(input("enter first num:"))
num2 = int(input("enter second num:"))

print("The H.C.F. (ebob) is", compute_hcf(num1, num2))

"""ekok bulma"""

"""
def compute_lcm(x, y):

   # choose the greater number
   if x > y:
       greater = x
   else:
       greater = y

   while(True):
       if((greater % x == 0) and (greater % y == 0)):
           lcm = greater
           break
       greater += 1

   return lcm

num1 = int(input("enter num1:"))
num2 = int(input("enter num2:"))

print("The L.C.M. (ekok) is", compute_lcm(num1, num2))
"""