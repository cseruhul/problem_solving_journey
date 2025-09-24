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

        vector<ll> grumpiness(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> grumpiness[i];
        }

        ll idx;

        if (n % 2 == 0)
        {
            idx = 1;
        }
        else
        {
            idx = 0;
        }

        ll ans = 0;

        sort(grumpiness.begin(), grumpiness.end());

        for (ll i = idx; i < n; i += 2)
        {
            ans += grumpiness[i];
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