# files

file = open("deneme.txt", "w")
file.write("bugra\n")
file.write("kara\n")
file.write("molla\n")
file.writelines("this is a line")
file.close()

# eğer (a)ppend yerine (w)rite dersen siler üzerine yazar
fileAgain = open("deneme.txt", "a")
fileAgain.write("\nikinci deneme\n")

# dosyayı okumak için okuma modunda (r)ead açıyoruz
fileRead = open("deneme.txt", "r")
for i in range(10):
    print(fileRead.readline(), end="")
# ya da
for line in fileRead:
    print(line, end="")
