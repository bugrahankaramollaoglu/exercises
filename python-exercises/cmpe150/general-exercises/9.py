# bir cümledeki tüm h leri kaldırma

def thrace(message):
    output = ""
    for i in message:
        if i != 'h' and i != 'H':
            output += i
    return output


print(thrace("asadshashdahsdhashd"))
