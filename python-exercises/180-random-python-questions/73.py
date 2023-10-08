"""bir sayıya kadar olan tüm doğal sayıların toplamı"""

num = int(input("enter a number:"))

if num < 0:
    print("Enter a positive number")
else:
    sum = 0
    while (num > 0):
        sum += num
        num -= 1
    print("The sum is", sum)
