#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int first, second;
        cin >> first >> second;

        if (first > second)
        {
            cout << first << endl;
        }
        else
        {
            cout << second << endl;
        }
    }
    return 0;
}