""" Write a program that computes the net amount of a bank account based a
transaction log from console input. The transaction log format is shown as
following:
D 100
W 200
D means deposit while W means withdrawal. """


def fun():
    while (True):
        d = input("d: ")
        w = input("w: ")
        if (w.isnumeric() != 1 or d.isnumeric() != 1):
            print("hata!")
            return
        else:
            print("profit/loss: {}".format(int(d) - int(w)))


fun()
