""" Write a program that accepts a sentence and calculate the number of letters
and digits. """


def fun():
    sent = input()
    lettersNum = len(list(filter(lambda ch: ch.isalpha(), sent)))
    numsNum = len(list(filter(lambda ch: ch.isnumeric(), sent)))
    print(lettersNum)
    print(numsNum)


fun()
