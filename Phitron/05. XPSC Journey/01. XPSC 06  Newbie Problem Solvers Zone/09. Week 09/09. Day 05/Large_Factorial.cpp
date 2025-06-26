#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = (1LL * (ans % MOD) * (i % MOD)) % MOD;
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