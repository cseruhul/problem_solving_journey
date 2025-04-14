#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student obj[n];

    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].roll >> obj[i].marks;
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        // swap(obj[i], obj[j]);
        Student temp = obj[i];
        obj[i] = obj[j];
        obj[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].roll << " " << obj[i].marks << endl;
    }

    return 0;
}