
class Order:
    def __init__(self) -> None:
        self.items = {}

    def add_item(self, item):
        if item in self.items:
            self.items[item] += item.quantity
        else:
            self.items[item] = item.quantity

    def remove(self, item):
        if item in self.items:
            del self.items[item]

    def total_price(self):
        sum = 0
        for item, quantity in self.items.items():
            sum += item.price * quantity
        return sum

    def clear(self):
        self.items = {}

