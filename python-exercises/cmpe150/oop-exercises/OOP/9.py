# bir modülden sadece bazı fonksiyonları çağırma
from os import name

# modülün kendisini değil metodunu çağırdığından
print(os.name) # bu ifade hata verir. os diye modül tanımıyor
print(name) # bu ifade vermez

from sys import * # artık sys altındaki tüm metotları sys. demeden kullanabilirsin
