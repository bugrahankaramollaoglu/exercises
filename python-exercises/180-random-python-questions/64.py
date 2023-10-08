""" bu programda vücut kitle endeksini hesaplayan
bir program yazacağız """

# taking input from user
height = float(input("please enter your height in centimeters: "))
weight = float(input("please enter your weight in kilograms: "))

# turning cm height to proper state for BMI Index
height = height / 100

# formula of BMI
BMI = weight / (height * height)

print("your Body Mass Index is: ", BMI)

if (BMI > 0):
    if (BMI <= 16):
        print("you are severely underweight")
    elif (BMI <= 18.5):
        print("you are underweight")
    elif (BMI <= 25):
        print("you are Healthy")
    elif (BMI <= 30):
        print("you are overweight")
    else:
        print("you are severely overweight")
