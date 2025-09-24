#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll T, n, k;
    ll calc(ll i)
    {
        return (-2 * k * n + 4 * k * i - n * n + n + 2 * i * i - 2 * i) / 2;
    }
    bool check(ll i)
    {
        return calc(i) >= 0;
    }
    void solve()
    {
        cin >> n >> k;
        ll l = 1, r = n;
        while (l < r)
        {
            ll mid = (l + r) >> 1;
            if (check(mid))
                r = mid;
            else
                l = mid + 1;
        }
        cout << min(abs(calc(l - 1)), abs(calc(l))) << endl;
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