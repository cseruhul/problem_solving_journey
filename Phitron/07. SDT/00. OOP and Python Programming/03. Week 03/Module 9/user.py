from abc import ABC


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.designation = designation
        self.salary = salary


class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.employees = []

    def add_employee(self, name, phone, email, address, age, designation, salary):
        emp = Employee(name, phone, email, address, age, designation, salary)
        self.employees.append(emp)

    def view_employee(self):
        print("Employee list: ")

        for emp in self.employees:
            print(
                f"{emp.name} {emp.phone} {emp.email} {emp.address} {emp.age} {emp.designation} {emp.salary}"
            )


emp = Employee(
    "Ruhul", "017337230081", "ruhul.computer12@gmail.com", "Kushtia", 32, "chief", 50000
)

# print(emp.name, emp.phone, emp.email, emp.address, emp.age, emp.salary)

admin = Admin("Ruhul", "01733723971", "ruhul.computer12@gamil.com", "Kushtia")
admin.employees.append(emp)
admin.add_employee(
    "Amin", "01823208533", "amin.amin@gmail.com", "Kushtia", 25, "chief", 25000
)
admin.add_employee(
    "Biddut", "01568345862", "biddut.ali@gmail.com", "Kushtia", 25, "admin", 25000
)
admin.view_employee()
