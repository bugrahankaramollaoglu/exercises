"""Count Character Occurrences"""


def count_characters(s):
    count = {}
    # count each character in the string
    for i in s:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    print(count)


count_characters("bugrahan karamollaoglu")
