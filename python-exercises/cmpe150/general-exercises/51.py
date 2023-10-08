while True:
    val = input("Enter a number: ")
    try:
        val = int(val)
        print('square:', val**2)
        break
    except ValueError:
        print(val + ' is not a number')
