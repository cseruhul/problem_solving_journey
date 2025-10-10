class Student:
    def __init__(self, name, curr_class, std_id):
        self.name = name
        self.curr_class = curr_class
        self.std_id = std_id

    def __repr__(self):
        return f"Student Name: {self.name} and ID: {self.std_id}"


class Teacher:
    def __init__(self, name, dept, course, id):
        self.name = name
        self.dept = dept
        self.course = course
        self.id = id

    def __repr__(self):
        return f"Teacher Name: {self.name} and ID: {self.id}"


class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []

    def __repr__(self):
        print(f"WELCOME TO {self.name}")
        print("---------[TEACHERS]-----------")
        for teacher in self.teachers:
            print(teacher)
        print("---------[STUDENTS]-----------")
        for student in self.students:
            print(student)
        return "ALL DONE"

    def add_teacher(self, name, dept, course):
        id = len(self.teachers) + 100
        teacher = Teacher(name, dept, course, id)
        self.teachers.append(teacher)

    def enroll(self, name, curr_class, amount):
        if amount < 6500:
            print(f"Insufficient Fund {amount}")
        else:
            id = len(self.students) + 1
            student = Student(name, curr_class, id)
            self.students.append(student)
            return f"{self.name} has been added. return amount {amount - 6500}"


phitron = School("Phitron")
phitron.enroll("A", 1, 500)
phitron.enroll("B", 1, 6500)
phitron.enroll("C", 1, 56500)
phitron.enroll("D", 1, 50000)
phitron.enroll("E", 1, 15000)


phitron.add_teacher("Ruhul", "CSE", "DBMS")
phitron.add_teacher("Amin", "CSE", "DS")
phitron.add_teacher("Biddut", "CSE", "Algorithm")


print(phitron)
