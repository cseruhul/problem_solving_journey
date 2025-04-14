#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size(), flag = 1;

        if (n % 2 == 1)
        {
            flag = 0;
        }
        else
        {
            for (int i = 0, j = n / 2; i < n / 2; i++, j++)
            {
                if (s[i] != s[j])
                {
                    flag = 0;
                    break;
                }
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