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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        auto ok = [&](ll mid)
        {
            ll cnt = 0;

            for (ll i = n / 2; i < n; i++)
            {
                if (arr[i] < mid)
                {
                    cnt += (mid - arr[i]);
                }
            }
            return cnt <= k;
        };

        ll l = 0, r = 2e9, ans = 0, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
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