""" Write a function that takes two strings and a float. The strings denote temperature
units and they can only be "C", "F", "K".
This function must be able to convert given temperature (float) from the first string's
unit to second string's unit. You should return the converted temperature.
The conversion formula is as below:
C = (F - 32) * 5/9 = K - 273.15
Input Output

“C”, “K”, 50 -> 323.15

“F, “K”, 126 -> 325.372222

“F”, “C”, 12 -> -11.1111111

“K”, “C”, 42 -> -231.14999999 """


def fun():
    inp = input("enter in format C/K C/K temperature: ")
    inp = inp.split()
    _from = inp[0]
    _to = inp[1]
    _temp = float(inp[2])

    if _from == _to or (_from not in ["C", "K", "F"] or _to not in ["C", "K", "F"]):
        print("Erroneous input!")
    elif _from == "C" and _to == "K":
        return _temp + 273.15
    elif _from == "C" and _to == "F":
        return _temp * (9 / 5) + 32
    elif _from == "K" and _to == "C":
        return _temp - 273.15
    elif _from == "K" and _to == "F":
        return ((_temp - 273.15) * 9 / 5) + 32
    elif _from == "F" and _to == "C":
        return (_temp - 32) * 5 / 9
    elif _from == "F" and _to == "K":
        return (_temp - 32) * 5 / 9 + 273.15


print(fun())
