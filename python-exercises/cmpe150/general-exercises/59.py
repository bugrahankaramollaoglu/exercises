# QUESTION 2
# Write a function that generates a list of characters that appear only once in a given string
# Input "i love python and kutay is my favorite assistant ever"

def findUniques(str):
    return [char for char in str if str.count(char) == 1]



print(findUniques("1 2 3 2 1")) # 3
