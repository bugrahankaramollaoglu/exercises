
inp = [(10, 20), (30, 15), (40, 30), (30, 25)]


def custom_sort(item):
    return (-item[0], item[1])

# burada sayıları negatif değerlerine göre sıralayarak
# ascending değil descending sıralamış oluyoruz


sorted_list = sorted(inp, key=custom_sort)

print(sorted_list)
