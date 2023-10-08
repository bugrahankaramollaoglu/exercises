""" Question 86
Please write a program to generate all sentences where subject is in ["I", "You"] and verb
is in ["Play", "Love"] and the object is in ["Hockey","Football"].
Hints:
Use list[index] notation to get a element from a list. """

subjects = ["I", "You"]

verbs = ["Hate", "Love"]

objects = ["Movies", "Games"]

for i in range(len(subjects)):
    for i2 in range(len(verbs)):
        for i3 in range(len(objects)):
            print("{} {} {}".format(subjects[i], verbs[i2], objects[i3]))
