ls1 = ["bugra", 'kara', 20]
ls2 = ["cemre", "kara", 11]

ls3 = ls2 + ls1

print(ls3)

# listeleri şöyle de yaratabilirsin

my_ls = [i**2 for i in range(1, 7)]
print(my_ls)  # [1, 4, 9, 16, 25, 36]

""" what else can you do with lists
1) L.append(e) -> adds element at the end of the list
2) L.count(e) -> returns the number of occurences of e in the list
3) L.insert(i, e) -> inserts the object e into list at index i
4) L.extend(L2) -> L2 listesini L listesinin sonuna ekler
5) L.remove(e) -> L listesindeki ilk e'yi siler
6) L.pop(e) -> remove and return the elm at indice e. -1 if it's pop()
7) L.sort() -> sorts the list
8) L.reverse() -> reverses the order of a list
"""
