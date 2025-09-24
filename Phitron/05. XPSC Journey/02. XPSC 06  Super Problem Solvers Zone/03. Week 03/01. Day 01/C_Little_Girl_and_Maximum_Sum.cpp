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
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n + 1);
        for (ll i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }

        vector<ll> diff(n + 2, 0);
        for (ll i = 0; i < q; i++)
        {
            ll l, r;
            cin >> l >> r;
            diff[l]++;
            diff[r + 1]--;
        }

        for (ll i = 1; i < n + 2; i++)
        {
            diff[i] = diff[i - 1] + diff[i];
        }

        sort(arr.rbegin(), arr.rend());
        sort(diff.rbegin(), diff.rend());

        ll ans = 0;

        for (ll i = 0; i < n + 2; i++)
        {
            ans += arr[i] * diff[i];
        }

        cout << ans << newline;
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