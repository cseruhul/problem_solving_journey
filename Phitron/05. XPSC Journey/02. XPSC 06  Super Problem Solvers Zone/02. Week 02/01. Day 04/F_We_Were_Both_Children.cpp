#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 2e5 + 9;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;

        vector<ll> arr(n + 1, 0);

        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x <= n)
                arr[x]++;
        }

        vector<ll> hops(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i; j <= n; j += i)
            {
                hops[j] += arr[i];
            }
        }

        ll ans = 0;

        for (auto item : hops)
            ans = max(ans, item);

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
