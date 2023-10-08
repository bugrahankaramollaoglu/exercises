# lab question 1 13mart23

""" #QUESTION 1
#Fibonacci numbers are defined as a(n) = a(n-1) + a(n-2)
#a(0) = a(1) = 1
#Find 1000th Fibonacci number """


def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)


ls = list()


for i in range(5):
    ls.append(fib(i))
    print(ls[i], end=' ')
