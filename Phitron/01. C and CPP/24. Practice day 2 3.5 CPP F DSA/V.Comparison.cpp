#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char ch;

    cin >> a >> ch >> b;

    if (ch == '<' && a < b || ch == '>' && a > b || ch == '=' && a == b)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }
    return 0;
}