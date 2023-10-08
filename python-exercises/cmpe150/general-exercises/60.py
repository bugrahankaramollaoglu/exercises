import math

# POWER
print("Powers of 2")
for i in range(10):
    print("2^{} = {}".format(i, int(math.pow(2, i))))

# PERMUTATION COMBINATION
print(math.perm(4, 2))  # 12
print(math.comb(4, 2))  # 6
