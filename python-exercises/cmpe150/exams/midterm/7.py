
def get_substrings(string):
    substrings = set()
    length = len(string)

    for i in range(length):
        for j in range(i + 1, length + 1):
            substrings.add(string[i:j])

    return list(substrings)


user_input = input("Enter a string: ")
substrings = get_substrings(user_input)

print("List of unique substrings:")
for substring in substrings:
    print(substring)
