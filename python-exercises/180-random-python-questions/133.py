""" Write a program that computes the value of a+aa+aaa+aaaa with a given digit
as the value of a """


# we chose the str-int technique to solve the question
def fun(a):
    temp = str()
    ret = 0
    for i in range(4):
        temp += str(a)
        ret += int(temp)
    print(ret)


fun(1) # 1234


