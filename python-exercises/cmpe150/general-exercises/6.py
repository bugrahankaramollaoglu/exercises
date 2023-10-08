# lab question 2
# 054 to OSA

str = "pyth0n is 4wes0me. I l0ve c0ding in pyth0n 4n I c4n use l00ps."
str2 = "pyth0n is 4wes0me. I l0ve c0ding in pyth0n 4n I c4n use l00ps."

# 1st way
str = str.replace('0', 'o')
str = str.replace('4', 'a')
str = str.replace('5', 's')
print(str)

# 2nd way
res = ""

for i in str2:
    if i == "0":
        res += "o"
    elif i == "4":
        res += "a"
    else:
        res += i

print(res)
