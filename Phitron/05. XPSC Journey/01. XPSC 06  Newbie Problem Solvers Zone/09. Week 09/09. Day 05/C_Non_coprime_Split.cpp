#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    bool is_composite(ll n)
    {
        if (n <= 3)
            return false;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return true;
            }
        }

        return false;
    }

    bool is_prime(ll n)
    {
        if (n <= 1)
            return false;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    pair<ll, ll> ans_calc(ll n)
    {
        for (ll i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return {i, n - i};
            }
        }
        return {0, 0};
    }

    void solve()
    {
        ll l, r;
        cin >> l >> r;

        ll a, b;

        if (l == r || r <= 3)
        {
            if (is_prime(l) || r <= 3)
            {
                cout << -1 << endl;
            }
            else
            {
                pair<ll, ll> ans;
                ans = ans_calc(l);
                cout << ans.first << " " << ans.second << endl;
            }
        }
        else
        {
            if (r == 4)
            {
                cout << 2 << " " << 2 << endl;
                return;
            }
            ll N;
            for (ll i = l; i <= r; i++)
            {
                if (is_composite(i))
                {
                    N = i;
                    break;
                }
            }
            pair<ll, ll> ans;
            ans = ans_calc(N);
            cout << ans.first << " " << ans.second << endl;
        }
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