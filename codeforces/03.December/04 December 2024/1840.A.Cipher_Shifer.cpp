#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, a;
        int n;
        char ch;
        cin >> n;
        cin >> s;
        ch = s[0];

        for (int i = 1; i < n; i++)
        {
            if (s[i] == ch)
            {
                a += ch;
                i++;
                ch = s[i];
            }
        }

        cout << a << endl;
    }
    return 0;
}