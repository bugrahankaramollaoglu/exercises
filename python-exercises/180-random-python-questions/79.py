# converting given amount of seconds into hours / minutes / seconds

saniye = int(input("Saniye Giriniz:"))
saat = saniye // 3600
saniye = saniye % 3600
dakika = saniye // 60
saniye = saniye % 60
print("Girdiğiniz Saniyenin Saat Dönüşümü:", saat, "sa", dakika, "dk", saniye, "sn")
