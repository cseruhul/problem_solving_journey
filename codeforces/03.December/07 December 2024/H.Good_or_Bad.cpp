#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t, flag = 0;

    cin >> t;

    while (t--)
    {
        cin >> s;
        flag = 0;

        for (int i = 0; i < s.size() - 2; i++)
        {
            if (((s[i] == '0') && (s[i + 1] == '1') && (s[i + 2] == '0')) || ((s[i] == '1') && (s[i + 1] == '0') && (s[i + 2] == '1')))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}