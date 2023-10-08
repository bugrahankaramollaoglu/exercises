# Write a Python program that takes a list of integers
# as input and returns the second largest integer in the list.

def fun(a):
    max1 = float(0)
    max2 = float(0)
    for i in a:
        if i > max1:
            max2 = max1
            max1 = i
        elif i > max2:
            max2 = i
    return max2

# ya da max() yazip
# döndürdügü degeri listeden silip
# yeniden de calıstırılabilir

a = [10, 2, 53, 924, 3068, 39, 29]
print(fun(a))
