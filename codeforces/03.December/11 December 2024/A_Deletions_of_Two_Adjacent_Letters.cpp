#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    char ch;

    while (t--)
    {
        int flag = 0;
        cin >> s;
        cin >> ch;

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == ch) && (i % 2 == 0))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}