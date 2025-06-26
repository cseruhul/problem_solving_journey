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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(m);
        vector<ll> q(k);

        map<ll, bool> mp;

        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
            mp[q[i]] = true;
        }

        for (int i = 0; i < m; i++)
        {
            if (n == k || (n - 1) == k && mp.find(a[i]) == mp.end())
                cout << 1;
            else
                cout << 0;
        }

        cout << newline;
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