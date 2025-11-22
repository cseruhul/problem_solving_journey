from abc import ABC


class User(ABC):
    def __init__(self, name, email, phone, address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address


class Employee(User):
    def __init__(self, name, email, phone, address, designation, age, salary):
        super().__init__(name, email, phone, address)
        self.designation = designation
        self.age = age
        self.salary = salary


class Custormer(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)
        self.cart = Order()

    def view_menu(self, restaurent):
        restaurent.menu.show_menu()

    def add_to_cart(self, restaurent, item_name, quantity):
        item = restaurent.menu.find_item(item_name)
        if item:
            item.quantity = quantity
            self.cart.add_item(item)
            print("Item added")
        else:
            print("Item not found")

    def view_cart(self):
        print("******VIEW CART******")
        print("Name\tPrice\tQuantity")
        for item, quantity in self.cart.items.item():
            print(f"{item.name}\t{item.price}\t{quantity}")

        print(f"Total price: {self.cart.total_price}")


class Order:
    def __init__(self):
        self.items = {}

    def add_item(self, item):
        if item in self.items:
            self.item += item.quantity
        else:
            self.items = item.quantity

    def remove(self, item):
        if item in self.items:
            del self.items[item]

    def total_price(self):
        return sum(item.price * quantity for item, quantity in self.items.items())

    def clear(self):
        self.items = {}


class Admin(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)
        self.employee_db = []

    def add_employee(self, restaurent, employee):
        restaurent.add_employee(employee)

    def view_employee(self, restaurent):
        restaurent.view_employee()

    def add_menu_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)

    def remove_item(self, restaurent, item):
        restaurent.menu.remove_item(item)


class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employee_db = []
        self.menu = Menu()

    def add_employee(self, employee):
        self.employee_db.append(employee)

    def view_employee(self):
        print("Employees list: ")
        for employee in self.employee_db:
            print(
                f"{employee.name} {employee.email} {employee.phone} {employee.address}  {employee.designation} {employee.age} {employee.salary}"
            )


class Menu:
    def __init__(self):
        self.items_db = []

    def add_menu_item(self, menu_item):
        self.items_db.append(menu_item)

    def find_item(self, item_name):
        for item in self.items_db:
            if item.name == item_name:
                return item_name
        else:
            return None

    def remove_item(self, item_name):
        item = self.find_item(item_name)
        if item:
            self.items_db.remove(item_name)
            print("Item removed!")
        else:
            print("Item not found!")

    def show_menu(self):
        print("******MENU******")
        print("Name\tPrice\tQuantity")
        for item in self.items_db:
            print(f"{item.name}\t{item.price}\t{item.quantity}")


class Food_Item:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity


mamar_hotle = Restaurent("Mamar Restaurent")

mn = Menu()
item1 = Food_Item("Pizza", 12.45, 10)
item2 = Food_Item("Burger", 10, 30)
admin = Admin("Rahim", "rahim@gmaail.com", 1244525632, "Kushtia")
admin.add_menu_item(mamar_hotle, item1)
admin.add_menu_item(mamar_hotle, item2)

customer1 = Custormer("Rahim", "rahim@gmaail.com", 1244525632, "Kushtia")
customer1.view_menu(mamar_hotle)
