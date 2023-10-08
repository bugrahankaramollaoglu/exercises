# pythonda swap işlemi

# birinci klasik yol
a = 10
b = 20
temp = 0

temp = a
a = b
b = temp

# ikinci yol aritmetik
a = 10
b = 20

a = a + b
b = a - b
a = a - b

# üçüncü yol bitwise
a = 10
b = 20

a = a ^ b
b = a ^ b
a = a ^ b

# dördüncü yol , operator

a = 10
b = 20

a, b = b, a
