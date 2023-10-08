""" Question 51
Define a class named American and its subclass NewYorker.
Hints:
Use class Subclass(ParentClass) to define a subclass. """


class American:
    pass

# bu classı American classının subclassı yapmak
# için parametre olarak American classını veriyosun


class subAmerican(American):
    pass


anAmerican = American
aSubAmerican = subAmerican
print(anAmerican)
print(aSubAmerican)
