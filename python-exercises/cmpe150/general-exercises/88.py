# error handlingi özelleştirelim

try:
	a = int(input('enter: '))
except ValueError:
    print('value errora sebep oldun!!')
except:
	print('valueError harici tüm hatalar buna girer')
else:
    print('exceptionlara girmezse buna girer')
finally:
    print('buna her türlü girer')
