"""sorting numpy"""

"""
There are a bunch of sorting algorithms in computer science, for example:
Insertion Sort
Selection Sort
Merge Sort
Bubble Sort and many more.
"""

"""The NumPy library provides an inbuilt function for sorting"""

import numpy as np
a = np.array([34, 5, 89, 23, 76])
print(np.sort(a))

"""sort() fonksiyonu olmadan nasıl sıralarız?"""

def sorting(x):
    for i in range(len(x)):
        swap = i + np.argmin(x[i:])
        (x[i], x[swap]) = (x[swap], x[i])
    return x

print(sorting(a))
