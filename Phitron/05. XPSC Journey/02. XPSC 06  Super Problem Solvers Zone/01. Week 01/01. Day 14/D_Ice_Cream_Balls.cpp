#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e10 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        ll l = 2, r = MOD, x = MOD;
        while (r >= l)
        {
            ll mid = (l + r) >> 1;
            if (((mid - 1) * mid / 2) <= n)
            {
                x = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ll ans = (x + (n - (x - 1) * x / 2));
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