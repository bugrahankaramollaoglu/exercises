import os

if (os.name != 'nt'):
    print('Sisteminiz Windows değil, bu programı kullanamazsınız.')
elif (os.name == 'posix'):
    print('Sisteminiz UNIX.')

# write me binary search
