# list comprehension in python

digits = []
for i in range(1, 11):
    digits.append(i)

# yerine

digits = [i for i in range(1, 11)]
print('DIGITS:\n', digits)  # [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

digits2 = [(x, y) for x in range(1, 3) for y in range(10, 13)]
print('DIGITS2')
print(digits2)  # [(1, 10), (1, 11), (1, 12), (2, 10), (2, 11), (2, 12)]
