#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll x, n, ans = 1;
        cin >> x >> n;

        while (n)
        {
            ans = ans % MOD;

            if (n & 1)
            {
                ans = ((ans % MOD) * (x % MOD)) % MOD;
            }

            x = 1LL * x * x % MOD;
            n = n >> 1;
        }

        cout << ans << endl;
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