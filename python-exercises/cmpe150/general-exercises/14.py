def greet(name, surname):
    print(f"hello {name} {surname}.")


greet("bugra", "kara") # bugra kara
greet("bugra") # hata verir çünkü 2nd parametre yok

# parametreye default değer verirsen
# daha sonrasında çağırdığında o parametreyi
# vermezsen hata vermez.
def greet2(name, surname="kara"):
    print(f"hello {name} {surname}.")


greet2("cemre", "yılmaz") # cemre yılmaz
greet2("cemre") # cemre kara

def greet3(name="bugra", surname="kara"):
    print(f"hello {name} {surname}.")

# tüm parametreleri default value'lu oldugundan
# parametresiz de cagrılabiliyor
greet3()
