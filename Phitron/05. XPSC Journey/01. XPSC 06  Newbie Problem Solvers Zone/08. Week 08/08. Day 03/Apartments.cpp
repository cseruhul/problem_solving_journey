#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> a(n);
        vector<ll> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll ans = 0;

        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (abs(a[i] - b[j]) <= k)
            {
                i++, j++;
                ans++;
            }
            else
            {
                if (a[i] - b[j] > k)
                    j++;
                else
                    i++;
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

    ruhul.solve();

    return 0;
}