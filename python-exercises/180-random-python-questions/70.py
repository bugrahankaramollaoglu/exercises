hesapBugra = {
    "ad" : "bugra kara",
    "hesapNo" : "112155",
    "bakiye": 10000,
    "ekHesap" : 2000
}
hesapCemre = {
    "ad" : "cemre kara",
    "hesapNo" : "155112",
    "bakiye": 5000,
    "ekHesap" : 300
}
def paraÇek(hesap, miktar):
    print(f"merhaba {hesap['ad']}")
    if (hesap["bakiye"]) >= miktar:
        hesap["bakiye"] -= miktar
        print("hesabınızda yeterli miktarda para vardır.")
    else:
        toplam = hesap['bakiye'] + hesap["ekHesap"]
        if toplam >= miktar:
            ekHesapKullanimi = input("ek hesap kullanılsın mı (e/h)?")
            if ekHesapKullanimi == "e":
                ekHesapKullanimi = miktar - hesap["bakiye"]
                hesap["bakiye"] = 0
                hesap["ekHesap"] -= ekHesapKullanimi
                print("paranizi alabilirsiniz")
            else:
                print(f" {hesap['hesapNo']} nolu hesabınızdan {hesap['bakiye']} bulunmaktadır")
        else:
            print("bakiye yetersiz")
paraÇek(hesapBugra, 10000)

