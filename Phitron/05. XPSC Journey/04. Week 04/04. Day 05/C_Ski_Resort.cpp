#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    ll calculate(ll n)
    {
        ll ans = n * (n + 1) / 2;
        return ans;
    }
    void solve()
    {
        ll n, k, q, ans = 0;
        bool flag = true;
        cin >> n >> k >> q;
        vector<ll> temperature(n);

        for (int i = 0; i < n; i++)
        {
            cin >> temperature[i];
        }

        int l = 0, r = 0;

        while (r < n)
        {

            if (temperature[r] <= q)
            {
                r++;
            }
            if (r == n || temperature[r] > q)
            {

                if (r - l >= k)
                {
                    ans += calculate(r - l - k + 1);
                }

                l = r;
                l++;
                r++;
            }
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