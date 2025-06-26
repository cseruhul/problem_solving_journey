#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, w, ans = 1;
        cin >> n >> w;

        multiset<ll> width;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            width.insert(x);
        }

        ll rem_width = w;

        while (!width.empty())
        {
            auto ub = width.upper_bound(rem_width);
            if (ub != width.begin())
            {
                ub--;
                rem_width -= *ub;
                width.erase(ub);
            }
            else
            {
                rem_width = w;
                ans++;
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