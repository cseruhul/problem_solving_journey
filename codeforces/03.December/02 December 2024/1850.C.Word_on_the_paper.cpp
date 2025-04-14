#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 8;
    char ch[n][n];
    string ans;
    cin >> t;

    while (t--)
    {
        ans = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ch[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ch[i][j] != '.')
                {
                    ans += ch[i][j];
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}