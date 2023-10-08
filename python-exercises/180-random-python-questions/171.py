""" Write a program which takes 2 digits, X, Y as input and generates a 2-dimensional
array. The element value in the i-th row and j-th column of the array should be
i*j. """


def fun(x, y):
    arr2D = []
    for i in range(x):
        row = []
        for j in range(y):
            row.append(i*j)
        arr2D.append(row)
    print(arr2D)


# or
# arr2D = [[i*j for j in range(y)] for i in range(x)]


fun(2, 3)
