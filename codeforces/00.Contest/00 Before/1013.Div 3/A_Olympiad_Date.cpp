#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    vector<int> date = {0, 1, 0, 3, 2, 0, 2, 5};
    cin >> q;

    while (q--)
    {
        unordered_map<int, int> mp;
        for (auto item : date)
        {
            mp[item]++;
        }

        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] != 0)
            {
                mp[arr[i]]--;
                if (mp[arr[i]] == 0)
                    arr[i] = -1;
            }
        }

        int ans = -1;
        for (auto item : mp)
        {
            if (item.second != 0)
            {
                ans = 0;
                break;
            }
        }

        if (ans == 0)
            cout << ans << endl;
        else
        {

            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] == -1 and mp[arr[i]] == 0)
                {
                    ans = i;
                    break;
                }
            }

            cout << ans + 1 << endl;
        }
    }

    return 0;
}