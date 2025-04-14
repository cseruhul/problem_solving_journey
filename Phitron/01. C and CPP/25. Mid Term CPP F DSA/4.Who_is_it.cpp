#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID = 0;
    string name = "";
    char section = ' ';
    int total_marks = INT_MIN;
};

int main()
{
    int t;
    cin >> t;
    Student student1, student2, student3;

    while (t--)
    {
        Student student1, student2, student3;

        cin >> student1.ID >> student1.name >> student1.section >> student1.total_marks;
        cin >> student2.ID >> student2.name >> student2.section >> student2.total_marks;
        cin >> student3.ID >> student3.name >> student3.section >> student3.total_marks;

        if (student1.total_marks >= student2.total_marks && student1.total_marks >= student3.total_marks)
        {
            if (student1.total_marks == student2.total_marks)
            {
                if (student1.ID < student2.ID)
                {
                    cout << student1.ID << " " << student1.name << " " << student1.section << " " << student1.total_marks << endl;
                }
                else
                {
                    cout << student2.ID << " " << student2.name << " " << student2.section << " " << student2.total_marks << endl;
                }
            }
            else if (student1.total_marks == student3.total_marks)
            {
                if (student1.ID < student3.ID)
                {
                    cout << student1.ID << " " << student1.name << " " << student1.section << " " << student1.total_marks << endl;
                }
                else
                {
                    cout << student3.ID << " " << student3.name << " " << student3.section << " " << student3.total_marks << endl;
                }
            }
            else
            {
                cout << student1.ID << " " << student1.name << " " << student1.section << " " << student1.total_marks << endl;
            }
        }
        else if (student2.total_marks >= student3.total_marks)
        {
            if (student2.total_marks == student3.total_marks)
            {
                if (student2.ID < student3.ID)
                {
                    cout << student2.ID << " " << student2.name << " " << student2.section << " " << student2.total_marks << endl;
                }
                else
                {
                    cout << student3.ID << " " << student3.name << " " << student3.section << " " << student3.total_marks << endl;
                }
            }
            else
            {
                cout << student2.ID << " " << student2.name << " " << student2.section << " " << student2.total_marks << endl;
            }
        }
        else
        {
            cout << student3.ID << " " << student3.name << " " << student3.section << " " << student3.total_marks << endl;
        }
    }

    return 0;
}