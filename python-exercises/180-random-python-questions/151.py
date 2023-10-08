""" what is the use of * operator in lists? """


def func(): return ([i for i in range(1, 10)])


print((func()))
print(*(func())) # []'lerden kurtariyor seni
