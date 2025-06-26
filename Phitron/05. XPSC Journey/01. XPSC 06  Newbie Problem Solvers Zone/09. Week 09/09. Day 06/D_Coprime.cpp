#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

vector<ll> gcd_calc[1005];

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> idx[1005];

        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            idx[x].push_back(i);
        }

        ll ans = -1;

        for (ll i = 1; i < 1005; i++)
        {
            for (int j : gcd_calc[i])

                if (!idx[i].empty() && !idx[j].empty())
                {
                    ans = max(ans, (idx[i].back() + idx[j].back()));
                }
        }

        cout << ans << "\n";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < 1005; i++)
    {
        for (int j = i; j < 1005; j++)
        {
            if (__gcd(i, j) == 1)
            {
                gcd_calc[i].push_back(j);
            }
        }
    }

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}