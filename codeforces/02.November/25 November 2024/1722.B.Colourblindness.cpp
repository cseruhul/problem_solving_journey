#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> t;

    while (t--)
    {
        int flag = 1;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R' && s2[i] == 'B' || s1[i] == 'B' && s2[i] == 'R' || s1[i] == 'R' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'R')
            {
                flag = 0;
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