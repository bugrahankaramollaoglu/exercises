""" Question:
A website requires the users to input username and password to register. Write a program
to check the validity of password input by users.
Following are the criteria for checking the password:
1. At least 1 letter between [a-z]
2. At least 1 number between [0-9]
1. At least 1 letter between [A-Z]
3. At least 1 character from [$#@]
4. Minimum length of transaction password: 6
5. Maximum length of transaction password: 12
Your program should accept a sequence of comma separated passwords and will check them
according to the above criteria. Passwords that match the criteria are to be printed, each
separated by a comma.
Example
If the following passwords are given as input to the program:
ABd1234@1,a F1#,2w3E*,2We3345
Then, the output of the program should be:
ABd1234@1 """


def check_password(password):
    # Check the length of the password
    if len(password) < 6 or len(password) > 12:
        return False

    # Check if there is at least one lowercase letter
    has_lowercase = False
    for char in password:
        if char.islower():
            has_lowercase = True
            break
    if not has_lowercase:
        return False

    # Check if there is at least one uppercase letter
    has_uppercase = False
    for char in password:
        if char.isupper():
            has_uppercase = True
            break
    if not has_uppercase:
        return False

    # Check if there is at least one digit
    has_digit = False
    for char in password:
        if char.isdigit():
            has_digit = True
            break
    if not has_digit:
        return False

    # Check if there is at least one special character
    has_special_char = False
    for char in password:
        if char in ['$', '#', '@']:
            has_special_char = True
            break
    if not has_special_char:
        return False

    return True


rep = list(i for i in input().split(','))
for i in rep:
    if (check_password(i) == True):
        print(i)
