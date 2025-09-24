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
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        auto is_ok = [&](ll height)
        {
            ll water = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] < height)
                {
                    water += (height - arr[i]);
                }
            }
            if (water > x)
                return false;

            return true;
        };

        ll l = 1, r = INT_MAX, ans = -1, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (is_ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
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