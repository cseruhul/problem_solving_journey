#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (s[n] == t[i])
        {
            n++;
        }
    }

    cout << n + 1;

    return 0;
}