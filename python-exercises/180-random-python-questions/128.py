""" Write a program that accepts a sequence of whitespace separated words as
input and prints the words after removing all duplicate words and sorting them
alphanumerically.
 """


def fun():
    inp = list(tuple(input().split()))
    inp.sort()
    print(inp)

# split(" ") and split() are the same

""" 2nd way
word = sorted(list(set(input().split())))
print(" ".join(word)) """

fun()
