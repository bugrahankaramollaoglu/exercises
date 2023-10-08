"""bir listedeki belli bir sayı tarafından bölünebilen sayıları bulma"""

import random

number = int(input("please insert number:"))
liste = [12, 64, 55, 57, 41, 93, 20, 105, 33, 51, 30]

result = list(filter(lambda x: (x % number == 0), liste))
print(result)