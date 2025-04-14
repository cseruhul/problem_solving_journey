#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(Student a, Student b)
{
    if (a.math_marks + a.eng_marks >= b.math_marks + b.eng_marks)
    {
        if (a.math_marks + a.eng_marks == b.math_marks + b.eng_marks)
        {
            if (a.id < b.id)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
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
    Student std_obj[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std_obj[i].nm >> std_obj[i].cls >> std_obj[i].s >> std_obj[i].id >> std_obj[i].math_marks >> std_obj[i].eng_marks;
    }

    sort(std_obj, std_obj + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << std_obj[i].nm << " " << std_obj[i].cls << " " << std_obj[i].s << " " << std_obj[i].id << " " << std_obj[i].math_marks << " " << std_obj[i].eng_marks << endl;
    }

    return 0;
}