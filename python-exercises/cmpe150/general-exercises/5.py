# sayfa 42
# binary to integer

import math

key = "10011"

num = 0
pow = 0
i = 0
len = len(str(key))
len2 = len

for i in range(len):
    num += (2 ** pow) * (math.floor(int(key[len-1]) % 10))
    pow += 1
    len -= 1

print(num)
