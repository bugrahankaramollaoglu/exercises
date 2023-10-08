user1 = input("adiniz:")
user2 = input("sizin adiniz?:")
u1 = input("%s, taş kağıt makas?" % user1)
u2 = input("%s, taş kağıt makas?" % user2)

def compare(u1, u2):
    if u1 == u2:
        return("Berabere!")
    elif u1 == "taş":
        if u2 == "kağıt":
            return(f"{user2} kazandı.")
        if u2 == "makas":
            return(f"{user1} kazandı.")
    elif u1 == "kağıt":
        if u2 == "taş":
            return(f"{user1} kazandı.")
        if u2 == "makas":
            return(f"{user2} kazandı.")
    elif u1 == "makas":
        if u2 == "taş":
            return(f"{user2} kazandı.")
        if u2 == "kağıt":
            return(f"{user1} kazandı.")
    else:
        return("Geçersiz. taş kağıt ya da makas giriniz.")

print(compare(u1, u2))

