""" Please write a program using generator to print the even numbers between 0 and n in comma
separated form while n is input by console.
Example:
If the following n is given as input to the program:
10
Then, the output of the program should be:
0,2,4,6,8,10
Hints:
Use yield to produce the next value in generator. """

def generate(n):
    for i in range(0, n+1):
        if (i%2==0):
            yield i

n = int(input())
vals = []
for i in generate(n):
    vals.append(str(i))

print(",".join(vals))
