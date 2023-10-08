""" Please write a program which accepts a string from console and print the char-
acters that have even indexes. """

inp = input()

inp = [inp[i] for i in range(len(inp)) if i % 2 == 0]
print("".join(inp))
