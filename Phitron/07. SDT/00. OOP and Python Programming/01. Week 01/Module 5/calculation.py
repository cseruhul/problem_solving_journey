class Shop:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkOut(self, amount):
        total = 0

        for item in self.cart:
            total += item["price"] * item["quantity"]

        print(f"You have to pay {total}")


new_shop = Shop("Ruhul Amin")
new_shop.add_to_cart("Banana", 5, 12)
new_shop.add_to_cart("Date", 600, 0.5)
new_shop.add_to_cart("Dry Fruits", 800, 2)

new_shop.checkOut(10000)
