""" Write a program that prompts the user to enter a string, print a list of all substrings of
the given string.
The printed list can be in any order but it must not contain any duplicate substrings.

“abc” -> ['a', 'ab', 'abc', 'b', 'bc', 'c']	"""


def get_substrings(str):
    substrings = set()

    for i in range(len(str)):
        for j in range(i + 1, len(str) + 1):
            substrings.add(str[i:j])

    return list(substrings)


print(get_substrings(input("Enter a string: ")))

