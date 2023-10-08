from tabulate import tabulate
data = [["Name", "Place", "Gender"], ["bugra", "samsun", "Male"], ["cemre", "artvin", "Female"], ["ugur", "izmir", "Male"]]
print(tabulate(data, headers='firstrow'))
print(tabulate(data, headers='firstrow', tablefmt='grid'))
print(tabulate(data, headers='firstrow', tablefmt='fancy_grid'))