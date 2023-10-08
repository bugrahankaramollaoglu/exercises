""" Question:
Define a class which has at least two methods:
getString: to get a string from console input
printString: to print the string in upper case.
Also please include simple test function to test the class methods.
Hints:
Use __init__ method to construct some parameters """

# Define a class called myClass
class myClass(object):

    # Define a constructor for the class that initializes a string attribute called "s"
    def __init__(self):
        self.s = ""

    # Define a method called getStr that prompts the user to enter a string and stores it in the "s" attribute
    def getStr(self):
        self.s = input("enter a string: ")

    # Define a method called printStr that prints the value of the "s" attribute in uppercase
    def printStr(self):
        print('your str: ', self.s.upper())

# Create an instance of the myClass object called myObj
myObj = myClass()

# Call the getStr() method of the myObj object to prompt the user to enter a string
myObj.getStr()

# Call the printStr() method of the myObj object to print the entered string in uppercase
myObj.printStr()
