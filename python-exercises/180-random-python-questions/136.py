""" A website requires the users to input username and password to register. Write
a program to check the validity of password input by users. Following are the
criteria for checking the password:
• At least 1 letter between [a-z]
• At least 1 number between [0-9]
• At least 1 letter between [A-Z]
• Minimum length of transaction password: 6
• Maximum length of transaction password: 12
Your program should accept a sequence of comma separated passwords and will
check them according to the above criteria. Passwords that match the criteria
are to be printed, each separated by a comma. """


def is_az(str):
    for i in str:
        if i < 'a' and i > 'z':
            return 0
    return 1


def is_AZ(str):
    for i in str:
        if i < 'A' and i > 'Z':
            return 0
    return 1


def is_09(str):
    for i in str:
        if i < '0' and i > '9':
            return 0
    return 1


def is_min_max(str):
    if (len(str) >= 6 and len(str) <= 12):
        return 1
    return 0


def is_valid(str):
    if (is_min_max(str) and is_09(str) and is_AZ(str) and is_az(str)):
        return 1
    return 0


def fun():
    words = input().split(", ")
    for i in words:
        if (is_valid(i)):
            print(i)


fun()
