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
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ll low = l - arr[i];
            ll high = r - arr[i];

            auto left = lower_bound(arr.begin() + i + 1, arr.end(), low);
            auto right = upper_bound(arr.begin() + i + 1, arr.end(), high);

            ans += (right - left);
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