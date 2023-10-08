"""fizzBuzz
this is a classic coding interview question. birden 50'ye kadar
sayı sıralara 3 ile bölünebilenlerin yerine fizz 5 ile bölünebilenlerin
yerine buzz 15 ile bölünebilenlerin yerine fizzBuzz yazdır
1) 1 ile 50 arasında for metodu ile range yazdır
2)
"""
for i in range(1, 51):
    if i % 3 == 0 and i % 5 == 0:
        print("fizzBuzz")
    elif i % 3 == 0:
        print("fizz")
    elif i % 5 == 0:
        print("buzz")
    else:
        print(i)


