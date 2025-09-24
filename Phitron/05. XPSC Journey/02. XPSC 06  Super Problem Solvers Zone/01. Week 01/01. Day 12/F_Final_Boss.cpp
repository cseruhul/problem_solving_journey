#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const ll MOD = 1e12;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll h, n;
        cin >> h >> n;

        vector<ll> a(n);
        vector<ll> c(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> c[i];

        auto ok = [&](ll mid)
        {
            __int128 dmg = 0;
            for (int i = 0; i < n; i++)
            {
                ll total = ((mid - 1ll) / c[i]) + 1LL;
                dmg += (total * a[i]);
            }

            return dmg >= h;
        };

        ll l = 1, r = 1e12, mid, ans = 1;

        while (l <= r)
        {
            mid = l + (r - l) / 2LL;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1LL;
            }
            else
            {
                l = mid + 1LL;
            }
        }

        cout << ans << newline;
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