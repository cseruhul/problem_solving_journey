#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, ans;
        cin >> n;
        string str;
        cin >> str;
        vector<int> frequency(26, 0);

        for (int i = 0; i < n; i++)
        {
            frequency[str[i] - 'a'] = 1;
        }

        for (int i = 25; i >= 0; i--)
        {
            if (frequency[i] == 1)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}