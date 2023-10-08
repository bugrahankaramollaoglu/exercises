class Person:
    def __init__(self, name, surName):
        self.name = name
        self.surname = surName

    def introduce(self):
        print('my name is {} {}'.format(self.name, self.surname))


class Ben(Person):
    # eğer buraya __init__() eklersen artık child'ınkini kullanmaya başlar
    # kullanmaya devam etmek istiyosan şöyle yaz
    def __init__(self, name, surName):
		Person.__init__(self, name, surName)


x = Ben('bugra', 'kara')
x.introduce() # my name is bugra kara
