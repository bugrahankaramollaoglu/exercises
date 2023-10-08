def get_data(myTup):
    num = []
    words = []

    for t in myTup:
        num.append(t[0])
        if (t[1] not in words):
            words.append(t[1])

    min_num = min(num)
    max_num = max(num)

    uniq = len(words)

    return (min_num, max_num, uniq)


aaa = ((10, 'buğra'), (20, 'mehmet'), (300, 'ali'), (40, 'cemre'))

print(get_data(aaa))
