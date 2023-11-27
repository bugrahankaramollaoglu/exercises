""" You have a stock that is increasing in value insanely.
Your stocks increases in value by 1% everyday, meaning that:
If your stock is ₺100 on day 0, it values 100*%1 = 101 on day 1, and it values
101*%1 = 102,01 on day 2.
Your stock increases in value 2% every weekend day.
Your stock increases in value 5% every month.
Your stock increases in value 10% every year.
Write a program that takes a float (initial value of your stock) and an integer (day).
The program must calculate the value of your stock at the given day.
When increasing in value on a day, the stock can increase by only one type of rule,
and the maximum increment is applied.
You start from day zero on 31th December night which is coincidentally Sunday too.
Weeks pass every 7 days; months pass every 30 days and years pass every 365 days.
Input Output
100, 2 	-> 102.01
100, 365 -> 17739.706955739555
100, 3650 -> 2.996594789347392e+24	"""


def calculate_stock_value(initVal, day):
    daily_increase = 0.01
    weekend_increase = 0.02
    monthly_increase = 0.05
    yearly_increase = 0.1

    currentVal = initVal

    for current_day in range(1, day + 1):
        if current_day % 365 == 0:
            currentVal *= 1 + yearly_increase
        elif current_day % 30 == 0:
            currentVal *= 1 + monthly_increase
        elif current_day % 7 == 6 or current_day % 7 == 0:
            currentVal *= 1 + weekend_increase
        else:
            currentVal *= 1 + daily_increase

    return currentVal


def main():
    initVal = float(input("Enter initial value: "))
    days = int(input("Enter number of days: "))

    print(calculate_stock_value(initVal, days))


main()
