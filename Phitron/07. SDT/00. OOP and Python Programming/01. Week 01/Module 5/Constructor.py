class Phone:
    manufactured = "Bangladesh"

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.prince = price

    def send_sms(self, phone_no, sms):
        message = f"Sending sms to {phone_no}. Message: {sms}"
        return message


myPhone = Phone("", "", "")
myPhone2 = Phone("Ruhul", "SAMSUNG", 1234)
print(myPhone.send_sms(1234789, "I love you bou"))

print(myPhone2.owner, myPhone2.brand, myPhone2.prince)
