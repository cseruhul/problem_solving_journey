class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print(f"{self.name} making sound")


class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f"{self.name} is barking")


class Cow(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f"{self.name} is moos")


class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f"{self.name} is Bha bha")


class Hen(Animal):
    def __init__(self, name):
        super().__init__(name)


my_dog = Dog("Tom")
my_dog.make_sound()

my_cow = Cow("Lalu")
my_cow.make_sound()

my_goat = Goat("Motu")
my_goat.make_sound()

my_hen = Hen("Morog")
my_hen.make_sound()
