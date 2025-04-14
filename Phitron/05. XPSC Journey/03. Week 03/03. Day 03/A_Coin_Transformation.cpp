#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    unordered_map<ll, ll> dp;
    ll max_coin(ll n)
    {
        if (n < 4)
            return 1;

        if (dp.count(n))
            return dp[n];

        dp[n] = 2 * max_coin(n / 4);
        return dp[n];
    }
    void solve()
    {
        ll n, coin;
        cin >> n;

        coin = max_coin(n);

        /*
        while (n > 3)
        {
            coin *= 2;
            n = n / 4;
        }
        */

        cout << coin << endl;
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