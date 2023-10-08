""" Write a program which can compute the factorial of a given numbers.The re-
sults should be printed in a comma-separated sequence on a single line.Suppose
the following input is supplied to the program: 8 Then, the output should
be:40320 """


def fucktorial():
    num = int(input("enter a num: "))
    faq = 1
    for i in range(1, num+1):
        faq = faq * i
    print(faq)


fucktorial()
