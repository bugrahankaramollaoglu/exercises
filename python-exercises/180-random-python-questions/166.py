""" Please write a program using generator to print the even numbers between 0
and n in comma separated form while n is input by console """


def gen(x):
    i = 0
    while (i <= x):
        if i % 2 == 0:
            yield i
        i += 1


vals = []
for i in gen(7):
    vals.append(i)

print(vals)
