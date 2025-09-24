#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Operations
{
public:
    ll l;
    ll r;
    ll d;
};

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> arr(n + 2, 0);

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<Operations> ops(m + 2);
        for (ll i = 1; i <= m; i++)
        {
            cin >> ops[i].l >> ops[i].r >> ops[i].d;
        }

        vector<ll> ops_op(m + 2, 0);
        for (ll i = 1; i <= k; i++)
        {
            ll x, y;
            cin >> x >> y;

            ops_op[x]++;
            ops_op[y + 1]--;
        }

        ll sum = 0;
        for (ll i = 1; i <= m; i++)
        {
            sum += ops_op[i];
            ops[i].d = ops[i].d * sum;
        }

        vector<ll> d_array(n + 2);
        for (ll i = 1; i <= m; i++)
        {
            d_array[ops[i].l] += ops[i].d;
            d_array[ops[i].r + 1] -= ops[i].d;
        }

        for (ll i = 1; i < n + 2; i++)
        {
            d_array[i] += d_array[i - 1];
        }

        for (ll i = 1; i < n + 1; i++)
        {
            arr[i] += d_array[i];
            cout << arr[i] << " ";
        }

        cout << newline;
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