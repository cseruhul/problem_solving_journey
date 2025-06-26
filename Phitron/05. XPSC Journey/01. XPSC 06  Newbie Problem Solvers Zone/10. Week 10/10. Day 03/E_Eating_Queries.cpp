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
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> prefix(n);
        sort(arr.rbegin(), arr.rend());
        prefix[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        while (q--)
        {
            ll x;
            cin >> x;

            auto itr = lower_bound(prefix.begin(), prefix.end(), x);

            ll ans = 0;
            if (itr == prefix.end())
            {
                ans = -1;
            }
            else
            {
                ans = itr - prefix.begin() + 1;
            }

            cout << ans << newline;
        }
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