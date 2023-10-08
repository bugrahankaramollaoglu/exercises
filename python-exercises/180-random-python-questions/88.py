"""güncel döviz kuru hesaplayan program
1) güncel verileri çekebilmek için forex-python library kullanıyoruz
2) import forex_python.converter diyoruz
3) CurrencyRates() fonksiyonunu bir değişkene atıyoruz
4) kodu yazıyoruz
"""

import forex_python.converter

C = forex_python.converter.CurrencyRates()
amount = int(input("enter the amount:"))
from_currency = input("from currency:").upper()
to_currency = input("to currency:").upper()
print(from_currency, "to ", to_currency, amount)
result = C.convert(from_currency, to_currency, amount)
print(result)
