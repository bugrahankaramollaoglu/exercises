#######################

a, b, c = 'xyz'

print(a)  # x
print(b)  # y
print(c)  # z

########################

tup = (10, 20)

a, b = tup
print(a)  # 10
print(b)  # 20

#########################


def fun(n, n2, n3):
    n = 100
    n2 = 'aaa'
    n3 = 234.3
    return (n, n2, n3)

#########################

bir, iki, üc = fun(1, 2, 3)
print(bir) # 100
print(iki) # aaa
print(üc)  # 234.3
