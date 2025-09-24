#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 1;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, t;
        cin >> n >> t;

        vector<ll> machines(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> machines[i];
        }

        auto ok = [&](ll mid)
        {
            ll product = 0;
            for (ll i = 0; i < n; i++)
            {
                product += (mid / machines[i]);
                if (product >= t)
                    return true;
            }

            return false;
        };

        ll l = 1, r = 1e18, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans;
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