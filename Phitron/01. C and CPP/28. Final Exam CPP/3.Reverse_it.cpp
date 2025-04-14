#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student std_obj[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std_obj[i].nm >> std_obj[i].cls >> std_obj[i].s >> std_obj[i].id;
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(std_obj[i].s, std_obj[j].s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << std_obj[i].nm << " " << std_obj[i].cls << " " << std_obj[i].s << " " << std_obj[i].id << endl;
    }

    return 0;
}