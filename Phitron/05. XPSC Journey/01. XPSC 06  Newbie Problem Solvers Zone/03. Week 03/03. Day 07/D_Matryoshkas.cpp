#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        map<ll, ll> mp;
        multiset<ll> ms;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            ms.insert(x);
        }

        ll ans = 0;

        for (auto it : ms)
        {
            int value = it;
            if (mp[value] != 0)
            {
                ans++;
                while (mp[value] >= 1)
                {
                    mp[value]--;
                    value++;
                }
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