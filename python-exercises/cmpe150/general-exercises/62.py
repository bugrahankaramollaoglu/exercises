def update_shopping_list(shopping_list):
    file = open("shopping_list.txt", "w")
    final_list = []
    for item in shopping_list:
        final_list.append(item + "\n")
    file.writelines(final_list)
    file.close()


def shopping(command, item, shopping_list):
    if command == "end":
        return 0
    elif command == "add":
        shopping_list.append(item)
        print("added {} to shopping list".format(item))
        update_shopping_list(shopping_list)
    elif command == "del":
        shopping_list.remove(item)
        print("deleted {} from shopping list".format(item))
        update_shopping_list(shopping_list)
    elif command == "dis":
        print("DISPLAYING SHOPPING LIST")
        for item in shopping_list:
            print(item)
    print("[add, del, dis, end] ", end="")
    command = input("")
    if command == "add" or command == "del":
        print("[item name] ", end="")
        item = input("")
    shopping(command, item, shopping_list)


shopping_list = []
update_shopping_list(["a", "b"])
file = open("shopping_list.txt", "r")
for line in file:
    shopping_list.append(line[:len(line)-1])
file.close()
