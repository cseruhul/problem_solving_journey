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
            cin >> arr[i];

        auto can_place = [&](ll dist)
        {
            ll cow = 1, last_cow = arr[0];
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] - last_cow >= dist)
                {
                    cow++;
                    last_cow = arr[i];
                }

                if (cow >= k)
                    return true;
            }

            return false;
        };

        ll l = 0, r = arr[n - 1], mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (can_place(mid))
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