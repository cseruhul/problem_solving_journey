#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> greater_arr(n);

        greater_arr[0] = arr[0];
        ll g_num = arr[0];

        for (ll i = 1; i < n; i++)
        {
            if (arr[i] >= g_num)
            {
                greater_arr[i] = arr[i];
                g_num = arr[i];
            }
            else
            {
                greater_arr[i] = g_num;
            }
        }

        vector<ll> prefix(n);

        prefix[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        while (q--)
        {
            ll x;
            cin >> x;

            auto ub = upper_bound(greater_arr.begin(), greater_arr.end(), x);
            --ub;

            ll idx = ub - greater_arr.begin();
            ll ans = 0;

            if (idx >= 0)
                ans = prefix[ub - greater_arr.begin()];

            cout << ans << " ";
        }

        cout << endl;
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