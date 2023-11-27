""" Write a program that takes a list of tuples of length 2 ( [(1,2),(3,4)...] ) where each
tuple represents a person and the elements of a tuple is that person's height and
weight in order.
Sort this list by height in non-increasing order. However, people sharing the same
height must be sorted by weight in non-increasing order as well. Print the sorted list.
Input Output
[(10, 20), (40, 30), (30, 15), (40, 35), (50,20), (40, 25), (50, 50)] ->
[(50, 50), (50, 20), (40, 35), (40, 30), (40,25), (30, 15), (10, 20)] """


def fun(lsts):
    newLst = sorted(lsts, key=lambda x: (x[0], x[1]), reverse=True)
    print(newLst)


def main():
    liste = [(10, 20), (40, 30), (30, 15), (40, 35), (50, 20), (40, 25), (50, 50)]
    fun(liste)


main()

""" bir başka çözümü

def custom_sort(item):
    return (-item[0], item[1])

# burada sayıları negatif değerlerine göre sıralayarak
# ascending değil descending sıralamış oluyoruz

sorted_list = sorted(inp, key=custom_sort)

print(sorted_list)

"""
