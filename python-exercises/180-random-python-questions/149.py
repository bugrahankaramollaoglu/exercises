""" Define a function that can accept two strings as input and print the string
with maximum length in console. If two strings have the same length, then the
function should print all strings line by line. """


def fun(a, b):
    if (len(a) == len(b)):
        print(a)
        print(b)
    else:
        maxStr = max(a, b)
        print(maxStr)


fun("bugra", "aaaaa")


""" author's solution, interesting. didn't know python could do that
func = (
	lambda a, b: print(max((a, b), key=len))
	if len(a) != len(b)
	else print(a + "\n" + b)
) """
