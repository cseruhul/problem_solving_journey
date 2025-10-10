class Laptop:
    def __init__(self, brand, model, price, color, processor):
        self.brand = brand
        self.model = model
        self.price = price
        self.color = color
        self.processor = processor

    def __repr__(self):
        return f"Brand: {self.brand}\nModel: {self.model}\nPrice: {self.price}\nColor: {self.color}\nProcessor: {self.processor}"

    def run(self, brand, model):
        print(f"{self.brand} {self.model} laptop is running.")


class Phone:
    def __init__(self, brand, model, price, color, processor, dual_sim):
        self.brand = brand
        self.model = model
        self.price = price
        self.color = color
        self.processor = processor
        self.dual_sim = dual_sim

    def __repr__(self):
        return f"Brand: {self.brand}\nModel: {self.model}\nPrice: {self.price}\nColor: {self.color}\nProcessor: {self.processor}\nDual_sim: {self.dual_sim}"

    def call(self, number, message):
        print(f"Calling to {number}")
        print(f"Sending SMS to {number} with message: {message}")


class Camera:
    def __init__(self, brand, model, price, color, lens):
        self.brand = brand
        self.model = model
        self.price = price
        self.color = color
        self.lens = lens

    def __repr__(self):
        return f"Brand: {self.brand}\nModel: {self.model}\nPrice: {self.price}\nColor: {self.color}\nLens: {self.lens}"

    def capture_photo(self):
        print(f"Captured with {self.model}")


# my_laptop = Laptop("HP", "Probook", 49000, "Silver", "core-i3-10")
# print(my_laptop)

# my_laptop1 = Laptop("Dell", "Pavilon", 45000, "Black", "core-i9-10")
# print(my_laptop1)

# my_phone = Phone("INFINIX", "HOT20i", 15000, "a", "qualcom", True)
# print(my_phone)
# my_phone.call("0123456789", "I love you bou")

my_camera = Camera("CANON", "MARKD3", 140000, "Black", "excludes EF-S lenses")
my_camera.capture_photo()
print(my_camera)
