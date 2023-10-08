# 3 ways to reverse a str in python

def isPalindrome(str):
    str2 = "".join(reversed(str))
    return (str2 == str)


def isPalindrome2(str):
    return (str == str[::-1])


def isPalindrome3(str):
    rev_str = ""
    for i in range(len(str)-1, -1, -1):
        rev_str += str[i]
    return (rev_str == str)


print(isPalindrome3("123321"))
