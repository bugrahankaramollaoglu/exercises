def add(num1, num2):
    return num1 + num2
def subtract(num1, num2):
    return num1 - num2
def div(num1, num2):
    return num1/num2
def multi(num1,num2):
    return num1*num2
def main():
    operation = input("What do you want to do?(+, -, *, or /):")
    if (operation != "+" and operation != "-" and operation != "*" and operation != "/"):
        print("Your input is invalid. Please enter a valid input.")
    else:
        num1 = float(input("Enter value for num1: "))
        num2 = float(input("Enter value for num2: "))
        if (operation == "+"):
            print(add(num1, num2))
        elif (operation == "-"):
            print(subtract(num1, num2))
        elif (operation == "*"):
            print(multi(num1,num2))
        elif (operation == "/"):
            print(div(num1,num2))
main()
