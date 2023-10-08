# sayfa 38

s = '10.4, 2.4, 3.123, 5.555, 6.5001'

list = []

list = s.split(', ')

sum = 0
for i in list:
    sum += float(i)

print(sum)
