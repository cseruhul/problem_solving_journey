#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compare(Student a, Student b)
{
    if (a.marks >= b.marks)
    {
        if (a.marks == b.marks)
        {
            return (a.roll < b.roll);
        }
        else
        {
            return (a.marks > b.marks);
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    Student obj[n];

    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].roll >> obj[i].marks;
    }

    sort(obj, obj + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].roll << " " << obj[i].marks << endl;
    }

    return 0;
}