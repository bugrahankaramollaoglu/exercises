
mes = input('enter a message: ')
shiftNum = int(input('enter num of shift: '))


def fun(message, shift):
    encoded = ""
    for ch in message:
        if ch == ' ':
            encoded += ' '
        elif (ord(ch) + shift) <= 122:
            temp = ord(ch)
            temp += shift
            encoded += chr(temp)
        else:
            if (ord(ch) + shift) > 122:
                ara = 122 - ord(ch)
                let = ord(ch)
                let += ara
                let += shift-ara
                let -= 26
                encoded += chr(let)
    return encoded


print(fun(mes, shiftNum))
