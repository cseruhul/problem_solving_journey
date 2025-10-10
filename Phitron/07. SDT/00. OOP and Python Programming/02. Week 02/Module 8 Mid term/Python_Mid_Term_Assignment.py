class StudentDatabse:
    student_list = []

    def add_student(self, student):
        self.student_list.append(student)


class Student(StudentDatabse):
    def __init__(self, name, department, is_enrolled):
        std_id = 100 + len(self.student_list) + 1
        self.__name = name
        self.__student_id = "S" + str(std_id)
        self.__department = department
        self.__is_enrolled = is_enrolled

        student = {
            "student_id": self.__student_id,
            "name": self.__name,
            "department": self.__department,
            "is_enrolled": self.__is_enrolled,
        }
        self.add_student(student)

    def enroll_student(self, std_id):
        registered_or_not = any(
            std.get("student_id") == std_id for std in self.student_list
        )

        if registered_or_not:
            for item in self.student_list:
                if item["student_id"] == std_id:
                    if not item["is_enrolled"]:
                        item["is_enrolled"] = True
                        print(f"Student {std_id} has been enrolled.")
                    else:
                        print(f"Student {std_id} already enrolled.")
                    break
        else:
            print(f"Student {std_id} has not been registered")

    def drop_student(self, std_id):
        registered_or_not = any(
            std.get("student_id") == std_id for std in self.student_list
        )

        if registered_or_not:
            for item in self.student_list:
                if item["student_id"] == std_id:
                    if item["is_enrolled"]:
                        item["is_enrolled"] = False
                        print(f"Student {std_id} has been dropped")
                    else:
                        print(f"Student {std_id} already dropped")

                    break
        else:
            print(f"Student {std_id} has not been registered")

    def view_student_info(self):
        for item in self.student_list:
            print(
                f"ID: {item['student_id']}, Name: {item['name']}, Department:{item['department']}, Enrolled: {item['is_enrolled']}"
            )
        print()


std1 = Student("Alice Smith", "Computer Science", True)
std2 = Student("Bob Johnson", "Mathematics", False)
std3 = Student("Charlie Lee", "Physics", True)

student_db = StudentDatabse()

while True:
    print("--- Student Management System Menu ---")
    print("1. View All Students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")
    print("Enter your choice (1-4):", end="")
    option = input()
    if option == "1":
        std1.view_student_info()
    elif option == "2":
        print("Enter Student ID to enroll: ", end="")
        std_id = input()
        std1.enroll_student(std_id)
        print()
    elif option == "3":
        print("Enter Student ID to drop: ", end="")
        std_id = input()
        std1.drop_student(std_id)
        print()
    elif option == "4":
        break
