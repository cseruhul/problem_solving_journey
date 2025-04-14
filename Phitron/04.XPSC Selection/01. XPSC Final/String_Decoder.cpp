#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s, ans;
        int n, char_freq;
        cin >> s;

        n = s.size();

        for (int i = 1; i < n; i += 2)
        {
            char_freq = s[i] - '0';

            while (char_freq--)
            {
                ans.push_back(s[i - 1]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}