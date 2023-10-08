""" create a function(n) that prints a dictionary
of elements 1-n and every key has value of its key to
the power of 2. """

inp = int(input('enter: '))
myDic = dict()
def creator(n):
	for i in range(1, n+1):
		myDic[i] = i**2
creator(inp)
print(myDic.ke)
