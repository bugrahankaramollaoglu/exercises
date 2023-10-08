res = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
sum = {}
max = 0
for i in range(len(res)-1, -1, -1):
    for i2 in range(len(res[i])):
        if (i+i2) > max:
            max = i + i2
        if i + i2 not in sum:
            sum[i+i2] = []
        sum[i+i2].append(res[i][i2])
print(sum)

output = []

for i in range(max + 1):
    output.extend(sum[i])
print(output)
