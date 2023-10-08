""" Question 92
By using list comprehension, please write a program to print the list after removing the
value 24 in [12,24,35,24,88,120,155].
 """

# bu listeden bütün 24leri silmek için list comprehension kullanmalısın
# remove() fonksiyonu sadece ilk gördüğü 24'ü siler
a = [12, 24, 35, 24, 88, 120, 155]

a.remove(24)

print([i for i in a if i != 24])

