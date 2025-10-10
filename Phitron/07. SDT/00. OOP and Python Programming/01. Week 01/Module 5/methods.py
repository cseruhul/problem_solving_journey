class Calculator:
    brand = "CASIO ESPLUS"

    def addition(self, a, b):
        return a + b

    def subtraction(self, a, b):
        return a - b

    def multiplication(self, a, b):
        return a * b

    def division(self, a, b):
        return a // b


my_calculator = Calculator()

print(my_calculator.brand)
print("Summation: ", my_calculator.addition(5, 10))
print("Subtraction: ", my_calculator.subtraction(10, 5))
print("Multiplication: ", my_calculator.multiplication(10, 5))
print("Division: ", my_calculator.division(100, 3))
