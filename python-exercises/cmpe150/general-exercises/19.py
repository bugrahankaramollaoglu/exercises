def printNames(name, surname, flag):
    if flag:
        print(surname + ', ' + name)
    else:
        print(name + ', ' + surname)


printNames("bugra", "kara", 0)
printNames("bugra", "kara", True)
printNames("bugra", "kara", flag=1)
