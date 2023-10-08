""" Question:
With a given integral number n, write a program to generate a dictionary that contains (i,
i*i) such that is an integral number between 1 and n (both included). and then the program
should print the dictionary. """

i = int(input("enter a num: "))
myDict = {i: i*i for i in range(1, i+1)}

# ya da

for i in range(1, i+1):
    myDict[i] = i * i

print(myDict)
