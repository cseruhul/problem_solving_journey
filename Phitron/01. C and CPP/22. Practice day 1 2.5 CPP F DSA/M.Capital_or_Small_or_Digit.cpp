#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}