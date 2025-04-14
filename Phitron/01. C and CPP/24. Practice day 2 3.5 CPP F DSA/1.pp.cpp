#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student std1("Ruhul", 164083, 'B', 90, 2);
    Student std2("Amin", 154083, 'B', 99, 2);
    Student std3("Biddut", 144083, 'B', 95, 2);

    if (std1.math_marks > std2.math_marks && std1.math_marks > std3.math_marks)
    {
        cout << std1.name << endl;
    }
    else if (std2.math_marks > std3.math_marks)
    {
        cout << std2.name << endl;
    }
    else
    {
        cout << std3.name << endl;
    }

    return 0;
}