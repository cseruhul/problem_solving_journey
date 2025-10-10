class Device:
    def __init__(self, brand, model, price, color):
        self.brand = brand
        self.model = model
        self.price = price
        self.color = color

    def __repr__(self):
        return f"Brand: {self.brand}\nModel: {self.model}\nPrice: {self.price}\nColor: {self.color}"


class Laptop(Device):
    def __init__(self, brand, model, price, color, processor):
        self.processor = processor
        super().__init__(brand, model, price, color)

    def __repr__(self):
        return f"{super().__repr__()}\nProcessor: {self.processor}"

    def run(self):
        print(f"{self.brand} {self.model} laptop is running.")


class Phone(Device):
    def __init__(self, brand, model, price, color, processor, dual_sim):
        self.processor = processor
        self.dual_sim = dual_sim
        super().__init__(brand, model, price, color)

    def __repr__(self):
        return f"{super().__repr__()}\n{self.processor}\n{self.dual_sim}"

    def call(self, number, message):
        print(f"Calling to {number}")
        print(f"Sending SMS to {number} with message: {message}")


class Camera(Device):
    def __init__(self, brand, model, price, color, lens):
        self.lens = lens
        super().__init__(brand, model, price, color)

    def __repr__(self):
        return f"{super().__repr__()}\n{self.lens}"

    def capture_photo(self):
        print(f"Captured with {self.model}")


my_laptop = Laptop("DELL", "DELL", 45000, "Black", "intel-corei310")
print(my_laptop)
my_laptop.run()

my_phone = Phone("INFINIX", "HOT20i", 15000, "a", "qualcom", True)
print(my_phone)
my_phone.call("0123456789", "I love you bou")

my_camera = Camera("CANON", "MARKD3", 140000, "Black", "excludes EF-S lenses")
my_camera.capture_photo()
print(my_camera)
