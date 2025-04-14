#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int flag = 0;
        cin >> s;

        int n = s.size();

        for (int i = 1; i < n; i++)
        {
            if (s[0] != s[i])
            {
                swap(s[0], s[i]);
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}