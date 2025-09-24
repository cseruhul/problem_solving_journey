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
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll max_item = LLONG_MIN;

        for (auto item : arr)
        {
            max_item = max(max_item, item);
        }
        // cout << max_item << newline;

        ll ans = 0;

        for (ll i = 0; i <= max_item; i++)
        {
            ll sold_item = 0;
            for (ll j = 0; j < n; j++)
            {
                sold_item += min(arr[j], i);
            }

            ll profit = 50LL * sold_item - 30ll * n * i;

            ans = max(ans, profit);
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