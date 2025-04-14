#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days = 0, years = 0, months = 0;
    
    cin >> days;

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days";

    return 0;
}