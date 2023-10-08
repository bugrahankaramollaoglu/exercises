
def fun(str, str2, derece):
    if (str == 'C' and str2 == 'K'):
        return (273.15 + derece)
    elif (str == 'C' and str2 == 'F'):
        a = derece * 9/5 + 32
        return a
    elif (str == 'K' and str2 == 'F'):
        a = derece * 9/5 + 32 + 273.15
        return a
    elif (str == 'K' and str2 == 'C'):
        return (derece - 273.15)
    elif (str == 'F' and str2 == 'C'):
        a = derece - 32
        a *= 5/9
        return a
    elif (str == 'F' and str2 == 'K'):
        a = derece - 32
        a *= 5/9
        a += 273.15
        return a


a = fun('K', 'C', 42)
print(a)
