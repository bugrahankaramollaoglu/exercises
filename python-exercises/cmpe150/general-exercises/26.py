# usage of readline()

file = open('/media/bugra/depo/yazilim/GITHUB/42/CMPE150/abc.txt', 'x')
for i in range(3):
    name = input('enter a name: ')
    file.write(name + '\n')
file.close()

cont = open('/media/bugra/depo/yazilim/GITHUB/42/CMPE150/abc.txt', 'r')
myLine = cont.readline()
print(myLine[:-1])
myLine = cont.readline()
print(myLine[:-1]) # iki kere \n atmasını engelliyor
