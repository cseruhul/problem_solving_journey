class Shop:
    cart = []

    def __init__(self, name):
        self.name = name

    def add_to_card(self, item):
        self.cart.append(item)


my_shopping = Shop("Ruhul")
my_shopping.add_to_card("Phone")
my_shopping.add_to_card("Laptop")
my_shopping.add_to_card("Pendrive")

print(my_shopping.name)
print(my_shopping.cart)

your_shopping = Shop("Bou")
your_shopping.add_to_card("Lal Sharee")
your_shopping.add_to_card("iPhone")
your_shopping.add_to_card("Groceries")
print(your_shopping.name)
print(your_shopping.cart)
