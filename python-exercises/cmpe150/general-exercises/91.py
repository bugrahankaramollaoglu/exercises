# program that takes a list of strings as input and returns
# a new list containing only the strings that have length greater than 5.

def fun(ls):
    newL = []
    for i in ls:
        if (len(i) > 5):
            newL.append(i)
    return newL


a = fun(["bugra", "kara", "moll", "ogullari"])
print(a)
