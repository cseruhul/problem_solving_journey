#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans = 0;
        cin >> n;
        map<ll, int, greater<ll>> freq_map;
        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;
            freq_map[number]++;
        }

        for (auto item : freq_map)
        {
            if (item.second > 0)
            {
                ans += item.second;
                for (auto i : freq_map)
                {
                    freq_map[i.first] -= item.second;
                }
            }
            // for (auto item : freq_map)
            // {
            //     // ans += item.second;
            //     // freq_map[item.first] -= item.second;
            //     cout << item.first << " " << item.second << endl;
            // }
            // cout << endl;
        }
        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}