#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, t;
        cin >> n >> t;

        vector<ll> a(n);
        vector<ll> h(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        ll fruits = a[0], l = 0, r = 1, ans = 0;

        if (fruits <= t)
            ans = 1;

        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
            {
                fruits += a[r];
            }
            else
            {
                fruits = a[r];
                l = r;
            }
            while (fruits > t)
            {
                fruits -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }

        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    ll t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}