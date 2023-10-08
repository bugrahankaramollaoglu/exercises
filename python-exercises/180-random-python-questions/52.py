"""  Question 94
With a given list [12,24,35,24,88,120,155,88,120,155], write a program to print this list
after removing all duplicate values with original order reserved """

a = [12, 24, 35, 24, 88, 120, 155, 88, 120, 155]


def removeDuplicate(li):
    newli = []
    seen = set()
    for item in li:
        if item not in seen:
            seen.add(item)
            newli.append(item)
    return newli


print(removeDuplicate(a))  # [12, 24, 35, 88, 120, 155]
