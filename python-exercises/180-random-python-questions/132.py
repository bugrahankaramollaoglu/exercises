""" Write a program that accepts a sentence and calculate the number of upper case
letters and lower case letters. """

def fun():
    sent = input()
    upperNum = len(list(filter(lambda ch: ch.isupper(), sent)))
    lowerNum = len(list(filter(lambda ch: ch.islower(), sent)))
    print(upperNum)
    print(lowerNum)


fun()
