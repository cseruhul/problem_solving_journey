#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            mp[x]++;
        }

        ll distinct, same, ans = 0;
        same = 0;
        for (auto item : mp)
        {
            if (item.second > same)
                same = item.second;
        }

        distinct = n - same;

        while (same < n)
        {
            if (same < distinct)
            {
                distinct -= same;
                ans = ans + 1 + same;
                same += same;
            }
            else
            {
                same += distinct;
                ans = ans + 1 + distinct;
                distinct -= distinct;
            }
        }

        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}