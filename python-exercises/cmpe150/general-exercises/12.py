w# 4 yerine a, sh yerine ş, ch yerine ç yaz

""" def fun(mesg):
    output = ""
    map = {"4": "a", "sh": "ş", "ch": "ç"}
    for i in mesg:
        if i in map:
            output += map[i]
        else:
            output += map[i]
        return mesg """

map = {"a": "4", "ş": "sh", "ç": "ch"}

print(map["ş"])
