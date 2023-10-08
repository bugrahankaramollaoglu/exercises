""" Question:
You are required to write a program to sort the (name, age, height) tuples by ascending
order where name is string, age and height are numbers. The tuples are input by console.
The sort criteria is:
1: Sort based on name;
2: Then sort based on age;
3: Then sort by score.
The priority is that name > age > score.
If the following tuples are given as input to the program:
Tom,19,80
John,20,90
Jony,17,91
Jony,17,93
Json,21,85
Then, the output of the program should be:
[('John', '20', '90'), ('Jony', '17', '91'), ('Jony', '17', '93'), ('Json', '21', '85'),
('Tom', '19', '80')] """

from operator import itemgetter, attrgetter

l = list()
while (True):
    s = input()
    if (not s):
        break
    else:
        l.append(tuple(s.split(',')))

print(sorted(l, key=itemgetter(0, 1, 2)))

# what is itemgetter?


""" myList = [('apple', 3), ('pear', 2), ('cherry', 5)]

# Sort the list based on the elements of each tuple
sorted_list = sorted(myList, key=itemgetter(0))  # birinci elemanları sıralar
sorted_list2 = sorted(myList, key=itemgetter(1))  # ikinci elemanları sıralar

print(sorted_list)  # [('apple', 3), ('cherry', 5), ('pear', 2)]
print(sorted_list2)  # [('pear', 2), ('apple', 3), ('cherry', 5)]

# You can also use itemgetter to extract specific items from a dictionary:
myDict = {'bugra': 20, 'cemre': 11, 'ugur': 24}
getVals = itemgetter('cemre', 'ugur')(myDict)
print(getVals)  # (11, 24)

# what is attrgetter?

attrgetter is a function that can be used
to retrieve specific attributes from objects
in a collection. It is similar to itemgetter,
but instead of retrieving items from an iterable
object based on their index, attrgetter retrieves
attributes from objects based on their name.

"""
