# The enumerate() function in Python 3 is a function
# that allows you to loop over an iterable
# and keep track of the index of the current item.

my_list = ['apple', 'banana', 'cherry']

for i, item in enumerate(my_list):
    print(i, item)

"""
0 apple
1 banana
2 cherry
"""

person = {"name": "John", "age": 30, "city": "New York"}
for key, val in person.items():
    print(key, ':', val)

"""
name : John
age : 30
city : New York
"""
