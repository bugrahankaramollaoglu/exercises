""" Question:
Write a program that accepts a sentence and calculate the number of letters and digits.
Suppose the following input is supplied to the program:
hello world! 123
Then, the output should be:
LETTERS 10
DIGITS 3
 """

rep = input()
nums = 0
chars = 0
for ch in rep:
	if (ch.isalpha() == 1):
		chars += 1
	elif (ch.isnumeric() == 1):
		nums += 1
print('LETTERS\t', chars)
print('DIGITS\t', nums)
