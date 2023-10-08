# file handling in python

# WRITE
names = open('kids', 'w')
for i in range(2):
    name = input('enter name: ')
    names.write(name + '\n')
names.close()

# eğer dosya yoksa hata verir. o yüzden x kullanabilirsin
names = open('myNames.txt', 'x')
for i in range(3):
    name = input('enter a name: ')
    names.write(name + '\n')
names.close()

# READ
names = open('kids', 'r')
for line in names:
    print(line[:-1])
names.close()

# ya da şöyle de okuyabilirsin
names = open('bugra.txt', 'r')
content = names.read()
names.close()
print(content)

# APPEND
names = open('kids', 'a')
names.write('ahmet\n')
names.write('mehmet\n')
names.write('mehmet\n')

"""
read() -> tüm içeriği döndürür
readLine() -> bir sonraki satırı döndürür
readLines() -> returns a list each of which is one line of the file
write(s) -> s stringini dosyanın sonune ekler
"""
