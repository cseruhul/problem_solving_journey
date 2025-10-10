class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.minBalance = 1000
        self.maxBalance = 100000

    def get_balance(self):
        return self.balance

    def deposite(self, balance):
        if balance > 0:
            self.balance += balance

    def withdraw(self, balance):
        if balance < self.minBalance:
            print(
                f"You want to withdraw BDT {balance}. But you cannot withdraw balance less than {self.minBalance}"
            )
        elif balance > self.maxBalance:
            print(
                f"You want to withdraw BDT {balance}. But you cannot withdraw balance more than {self.minBalance}"
            )
        else:
            if balance < self.balance:
                self.balance -= balance
                print(
                    f"You debited BDT {balance}. Your currnet balance is {self.balance}"
                )
            else:
                print("Insufficient Balance.")


sonali = Bank(50000)
sonali.withdraw(50)
sonali.withdraw(500000)
sonali.withdraw(60000)
sonali.withdraw(45000)
