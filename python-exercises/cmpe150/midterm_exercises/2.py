# Write a Python function that takes a string as input
# and returns a list of all possible substrings of
# that string. For example, if the input string is
# "abc", the output should be ["a", "ab", "abc", "b", "bc", "c"].

def get_substrings(string):
    # string "abc" olsun
    substrings = []
    for i in range(len(string)):
        for i2 in range(i + 1, len(string) + 1):
            substrings.append(string[i:i2])
    return substrings


a = "abc"
print(get_substrings(a))
