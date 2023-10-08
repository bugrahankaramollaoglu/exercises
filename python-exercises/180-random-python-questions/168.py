""" Write a program that calculates and prints the value according to the given
formula:
Q = Square root of [(2*C*D)/H]
Following are the fixed values of C and H:
• C is 50. H is 30.
D is the variable whose values should be input to your program in a comma-
separated sequence. For example Let us assume the following comma separated
input sequence is given to the program """


d = int(input("enter d: "))
c = 50
h = 30

def fun():
	q = (2*c*d)/h
	print(q**0.5)

fun()
