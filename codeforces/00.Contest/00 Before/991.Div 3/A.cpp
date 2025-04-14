#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string words[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> words[i];
        }

        int length = 0, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (length + words[i].length() <= m)
            {
                length += words[i].length();
                ans++;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}