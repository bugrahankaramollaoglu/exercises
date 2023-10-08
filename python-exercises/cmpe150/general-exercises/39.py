tuple1 = ("bugra", 10, 203)
tuple2 = ()

print(tuple1[2])

# tuple1 += ("cemre") # çalışmaz
tuple1 += ("cemre",)  # çalışır

a = tuple1[1:3] # 1 included, 3 excluded

print(tuple1)
