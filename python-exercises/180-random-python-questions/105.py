""" this is a coffee machine automat. It asks for user choice, calculates if automat's resources
 are sufficient and if they are it asks for money. If the money is sufficient as well it gives the
 customer his coffee. It also subsequently rearranges its resources for they are used up."""

MENU = {
    'Espresso': {
        'ingredients': {
            'water': 50,
            'coffee': 18,
        },
        'cost': 1.5,
    },
    'Latte': {
        'ingredients': {
            'water': 200,
            'milk': 150,
            'coffee': 24,
        },
        'cost': 2.5,
    },
    'Cappucino': {
        'ingredients': {
            'water': 250,
            'milk': 100,
            'coffee': 20,
        },
        'cost': 3,
    }
}

profit = 0

resources = {
    "water": 300,
    "milk": 200,
    "coffee": 100,
}

is_machine_on = True


# instead of return False or True according to the quantities, we could just
# create a "is_enough" flag and assign it to True at the beginning and if it is not
# >= than resources we could change it to False)
def is_resources_enough(order_ingredients):
    """Returns true if resources are enough for the order, false vice versa"""
    for item in order_ingredients:
        if order_ingredients[item] >= resources[item]:
            print(f"Sorry, we are out of {item}.")
            # returning False because there is not enough resources
            return False
    # returning True because there is enough resources
    return True


def process_money():
    """Returns the total calculated money inserted by the user"""
    print("please insert your money.")
    # every money inserted will have to be added to the Total paid by user
    total = int(input("how many 1 TL?: ")) * 1
    total += int(input("how many 50 kurus?: ")) ** 0.50
    total += int(input("how many 25 kurus?: ")) * 0.25
    return total


def is_money_enough(money_received, drink_cost):
    """Returns true if user's money is enough, false vice versa"""
    if money_received >= drink_cost:
        change = round(money_received - drink_cost, 2)
        print(f"here is your {change}₺ change.")
        # profit local scope'ta olduğu için önce global profit dememiz lazım, aksi taktirde kullanamayız
        global profit
        profit += drink_cost
        return True
    else:
        print(
            f"sorry, {money_received} is not sufficient. You needed {drink_cost - money_received}₺ more. Money refunded.")
        return False


def make_coffee(drink_name, order_ingredients):
    """Calculates if resources are enough for order's ingredients"""
    for item in order_ingredients:
        resources[item] -= order_ingredients[item]
    print(f"here is your {drink_name}. Enjoy!")


while is_machine_on:
    choice = input('What would you like? Espresso, Latte or Cappucino: ')
    if choice == "off":
        is_machine_on = False
    elif choice == "report":
        print(f"Water = {resources['water']}mL")
        print(f"Milk = {resources['milk']}mL")
        print(f"Coffee = {resources['coffee']}mL")
        print(f"Money = ${profit}")
    else:
        drink = MENU[choice]
        # fonksiyon parametre olarak ingredients alıyor
        if is_resources_enough(drink["ingredients"]):
            payment = process_money()
            if is_money_enough(payment, drink['cost']):
                make_coffee(choice, drink['ingredients'])
