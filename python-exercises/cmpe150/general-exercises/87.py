# error handling

try:
    a = int(input('enter: '))
    print('eğer a hataliysa ondan sonraki satırlar okunmaz')
    print('yani bunlar')
except:
    print('int girmeliydin!')
