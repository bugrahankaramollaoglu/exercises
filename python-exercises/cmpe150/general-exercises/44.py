l = [10, 'asd', 30]

# liste kopyalama
l2 = l[:]

print(l2)

# iki listedeki kopyaları silme

l1 = [10, 20, 30, 50]
l2 = [20, 35, 45, 50]


def remove_dups(L1, L2):
    for i in l1:
        if i in l1 and i in l2:
            l1.remove(i)
            l2.remove(i)


remove_dups(l1, l2)

print(l1)
print(l2)

# kopyalama
my = ['a', 'b', 'c']
my2 = my # bu tür bir kopyalama hatalıdır. sadece my my2'ye refer ediyor.
# o yüzden birinde yaptıgın bir degisiklik digerinde de etkilenir.
# gerçek bir kopyalama işlemi olsun istiyosan [:] ya da copy() kullanmalısın

# reel kopyalama
aa = ['a','b','c']
bb = aa[:]

# reel kopyalama 2
aa = ['a','b','c']
bb = aa.copy()

print('cevap: ', my2)
