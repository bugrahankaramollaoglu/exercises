"""cümledeki palindrom kelimeleri veren program
(palindrom: tersten yazılışı aynı olan kelimeler)
öncelikle
    0) cümle = input() metodu ile bir cümle istiyoruz
    1) argümanı cümle olan bir fonksiyon tanımlıyoruz
    2) replace() metodu ile ",.'?/><}{{}}'" diyerek tüm noktalama işaretlerini kaldırıyoruz
    3) palindrom isimli boş bir liste tanımlıyoruz ki daha sonra palindrom olanları bu listeye atalım
    4) split(" ") metodu ile boşluklardan kelimeleri ayırıyoruz bunu da words isimli değişkene atıyoruz
    5) lower() metodu ile büyük küçük harf ayrımını yok sayıyoruz
    6) kelime == kelime[::-1] tekniğiyle polindrom olup olmadığını soruyoruz
    7) evetse append() metodu ile listeye atıyoruz
    8) finalde fonksiyonu return ile döndürmeyi unutmuyoruz
"""

sentence = input('please enter your sentence to see if it includes a polindrom:')  # 0

def palindrome(sentence):
    for i in (",.'?/><}{{}}'"):
        sentence = sentence.replace(i, "")  # 1, 2

    palindrome = []  # 3

    words = sentence.split(' ')  # 4

    for word in words:
        word = word.lower()  # 5
        if word == word[::-1]:  # 6
            palindrome.append(word)  # 7

    return palindrome  # 8

print(palindrome(sentence))  # 9
