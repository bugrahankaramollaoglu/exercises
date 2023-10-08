""" Write a program that accepts a comma separated sequence of words as input
and prints the words in a comma-separated sequence after sorting them alpha-
betically. """

words = input("enter words: ").split(",")

words.sort()

print(words)
