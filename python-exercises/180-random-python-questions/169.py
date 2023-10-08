import time

""" Please write a program to print the running time of execution of ”1+1” for 100 times. """

start = time.time()

for i in range(1, 101):
    x = 1 + 1

now = time.time()

print(now-start)
