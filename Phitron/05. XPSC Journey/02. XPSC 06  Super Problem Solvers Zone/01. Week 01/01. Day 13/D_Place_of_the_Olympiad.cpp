#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, k;
        cin >> n >> m >> k;

        auto is_ok = [&](ll x)
        {
            ll no_of_k = ((x * (m / (x + 1))) + (m % (x + 1))) * n;
            // cout << no_of_k << newline;
            return no_of_k >= k;
        };

        ll l = 0, r = m, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (is_ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
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