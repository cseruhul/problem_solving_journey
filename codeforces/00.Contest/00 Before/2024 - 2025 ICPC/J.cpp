#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p = 0, b = 0;
    char P = 'P', B = 'B';
    cin >> n;

    while (n--)
    {
        p = 0, b = 0;
        int num;
        char ch;
        cin >> ch >> num;
        if (ch == P)
        {
            p += num;
        }
        if (ch == B)
        {
            B += num;
        }

        cout << p << b << endl;
    }

    return 0;
}