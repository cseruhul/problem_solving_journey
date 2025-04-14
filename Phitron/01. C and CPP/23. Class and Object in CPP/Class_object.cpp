#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student fun()
{
    Student karim(4, 9, 4.45);
    return karim;
}

int main()
{
    Student a = fun();

    cout << a.roll << " " << a.cls << " " << a.cgpa << endl;

    return 0;
}