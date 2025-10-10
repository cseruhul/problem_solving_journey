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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = arr[0];

        for (int i = 1; i < n; i++)
        {
            if ((i+1) % 2 == 0)
                ans = max(ans, arr[i]);
            else
                ans = min(ans, arr[i]);
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;
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