# QUESTION 1
# Bob and Sam are being interrogated by police as suspects of a theft case. Interrogation process is taking place in two
# separate rooms. They can either stay silent about their crime or betray each other by admitting it.
# The possible outcomes are:
# If Bob and Sam each betray the other, each of them serves two years in prison
# If Bob betrays Sam but Sam remains silent, Bob will be set free and Sam will serve three years in prison
# If Bob remains silent but Sam betrays Bob, Bob will serve three years in prison and Sam will be set free
# If Bob and Sam both remain silent, both of them will serve only one year in prison (on the lesser charge).
# Write a program that takes decisions (silence/betrayal) of Bob and Sam as input, then outputs their punishments.

# Input 	Output
# silence silence 	1 1
# silence betrayal 	3 0
# betrayal betrayal 2 2

bobChoice = input("Bob\'s Choice - (S)ilence or (B)etray: ")
SamChoice = input("Sam\'s Choice - (S)ilence or (B)etray: ")

if (bobChoice == 'S' and SamChoice == 'S'):
    print("1\t1")
elif (bobChoice == 'S' and SamChoice == 'B'):
    print("3\t0")
elif (bobChoice == 'B' and SamChoice == 'S'):
    print("0\t3")
