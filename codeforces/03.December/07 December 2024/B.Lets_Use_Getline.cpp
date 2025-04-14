#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch = '\\';

    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            break;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}