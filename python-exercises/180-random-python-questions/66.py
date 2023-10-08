import random

numberOfStreaks = 0

for experimentNumber in range(10000):

    # Code that creates a list of 100 'heads' or 'tails' values.
    hundredList = []
    streak = 0
    for i in range(100):
        hundredList.append(random.choice(['H', 'T']))

    # Code that checks the probability if there is a streak of 6 heads or tails in a row.
    for i in range(len(hundredList)):
        if i == 0:
            pass
        elif hundredList[i] == hundredList[(i - 1)]:
            streak += 1
        else:
            streak = 0

        if streak == 6:
            numberOfStreaks += 1
            break

print('Chance of streak: %s%%' % (numberOfStreaks / 100))