# kenarları verilen üçgenin alanını bulma (with Heron's formula)

kenar1 = int(input("üçgenin birinci kenarını giriniz:"))
kenar2 = int(input("üçgenin ikinci kenarını giriniz:"))
kenar3 = int(input("üçgenin üçüncü kenarını giriniz:"))

s = (kenar1+kenar2+kenar3) / 2

alan = (s*(s-kenar1)*(s-kenar2)*(s-kenar3)) ** 0.5

# virgülden sonrası uzamasın diye aşağıdaki metodu kullanıyoruz
print('üçgeninizin alanı %0.2f' %alan)
