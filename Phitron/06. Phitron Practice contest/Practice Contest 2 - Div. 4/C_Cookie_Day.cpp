#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k, ans = LLONG_MAX;
        cin >> n >> k;
        multiset<ll, greater<ll>> jar;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            jar.insert(x);
        }

        for (auto item : jar)
        {
            if (item >= k)
            {
                ans = min(ans, item % k);
            }
        }
        if (ans == LLONG_MAX)
            ans = -1;
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