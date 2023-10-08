
def calculate_stock_value(money, days):
    for day in range(1, days+1):
        if (day % 365) == 0:
            money *= 1.1
        elif (day % 30) == 0:
            money *= 1.05
        elif (day % 7) >= 5:
            money *= 1.02
        else:
            money *= 1.01
    return money


money = float(input("Initial value of your stock: "))
days = int(input("Number of days: "))

faizliMoney = calculate_stock_value(money, days)
print("Value of your stock after {} days: {:.2f}".format(days, faizliMoney))
