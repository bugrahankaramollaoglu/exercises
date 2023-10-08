def guess_game():

    import random

    a = random.randint(1,10)
    sayac = 0
    tahmin = 0

    while tahmin != a and tahmin != "exit":
        tahmin = input("1-9 arası sayı giriniz. çıkmak için exit yazınız:")

        if tahmin.lower() == "exit":
            break

        tahmin = int(tahmin)

        if tahmin < 1 or tahmin > 9:
            print("geçersiz. tekar deneyiniz.")
            continue

        elif tahmin > a:
            sayac += 1
            print("too high")
            continue

        elif tahmin < a:
            sayac += 1
            print("too low")
            continue

        elif tahmin == a:
            sayac += 1
            print(f"tebrikler! {sayac}. seferde dogru bildiniz.")
            
guess_game()