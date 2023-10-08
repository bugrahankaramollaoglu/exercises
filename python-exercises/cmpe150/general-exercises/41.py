# tuples can be used to return multiple values from a func

def fun():
    a = 10
    b = 20
    return (a, b)

x, y = fun()

print(x) # 10
print(y) # 20
