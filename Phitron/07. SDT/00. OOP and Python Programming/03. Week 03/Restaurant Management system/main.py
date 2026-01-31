from foodItem import FoodItem
from restaurant import Restaurant
from User import Customer, Employee, Admin


hotel_saladiye_dhaka = Restaurant("Hotel Salal Diye Dhaka")


def customer_menu():
    name = input("Enter your name: ")
    email = input("Enter your email address: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")
    customer = Customer(name=name, phone=phone, address=address, email=email)

    while True:
        print(f"Welcome Mr.{customer.name}")
        print("1. View Menu")
        print("2. Add item to cart")
        print("3. View Cart")
        print("4. Pay bill")
        print("5. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            customer.view_menu(hotel_saladiye_dhaka)
        elif choice == 2:
            item_name = input("Please enter item name: ")
            quantity = int(input("Please enter item quantity: "))
            customer.add_to_cart(
                restaurant=hotel_saladiye_dhaka, item_name=item_name, quantity=quantity
            )
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.pay_bill()
        elif choice == 5:
            break
        else:
            print("Invalid input")


def admin_menu():
    name = input("Enter your name: ")
    email = input("Enter your email address: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")
    admin = Admin(name=name, phone=phone, address=address, email=email)

    while True:
        print("-----------------------")
        print(f"Welcome Mr.{admin.name}")
        print("-----------------------")
        print("1. Add new item")
        print("2. Add new employee")
        print("3. View Employee")
        print("4. View Items")
        print("5. Delete Items")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            item_name = input("Enter item name: ")
            item_price = int(input("Enter item price:"))
            item_quantity = int(input("Enter item quantity: "))

            item = FoodItem(name=item_name, price=item_price, quantity=item_quantity)
            admin.add_new_item(restaurant=hotel_saladiye_dhaka, item=item)

        elif choice == 2:
            name = input("Enter employee name: ")
            phone = input("Enter employee phone: ")
            email = input("Enter employee email: ")
            address = input("Enter employee address: ")
            designation = input("Enter employee designation: ")
            age = input("Enter employee age: ")
            salary = input("Enter employee salary: ")

            employee = Employee(
                name=name,
                phone=phone,
                email=email,
                address=address,
                designation=designation,
                age=age,
                salary=salary,
            )

            admin.add_employee(hotel_saladiye_dhaka, employee=employee)

        elif choice == 3:
            admin.view_employee(restaurant=hotel_saladiye_dhaka)
        elif choice == 4:
            admin.view_item(restaurant=hotel_saladiye_dhaka)
        elif choice == 5:
            item_name = input("Please enter item name to delete: ")
            admin.remove_item(restaurant=hotel_saladiye_dhaka, item_name=item_name)
        elif choice == 6:
            break
        else:
            print("Invalid input.")


while True:
    print("****(WELCOME)****")
    print("1. Customer")
    print("2. Admin")
    print("3. Exit")

    choice = int(input("Please enter your choice: "))
    if choice == 1:
        customer_menu()
    elif choice == 2:
        admin_menu()
    elif choice == 3:
        break
