class Phone:
    price = 12000
    color = "blue"
    brand = "samsung"

    def call(self):
        print("calling one person")

    def send_sms(self, phone, sms):
        text = f"Sending SMS to: {phone + 5}"
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, "Missy, Imissed to miss you")
print(result)
