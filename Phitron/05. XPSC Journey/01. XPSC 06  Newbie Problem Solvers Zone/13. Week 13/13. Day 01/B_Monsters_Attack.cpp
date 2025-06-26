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
        ll n, k;
        cin >> n >> k;
        bool flag = true;
        vector<ll> a(n);
        // vector<ll> x(n);
        map<ll, ll> monsters;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            monsters[abs(x)] += a[i];
        }

        ll left = 0;
        ll s = 1;

        for (int i = 1; i <= n; i++)
        {
            left += k - monsters[i];
            if (left < 0)
            {
                flag = false;
            }
        }

        if (flag)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
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