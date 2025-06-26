#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    ll gcd(ll a, ll b)
    {
        while (b != 0)
        {
            ll temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void solve()
    {
        ll x, y, k;
        cin >> x >> y >> k;

        bool turn = 1;

        for (ll i = 0; i < k; i++)
        {
            ll old_x = x, old_y = y;

            ll gcd_val = gcd(x, y);

            if (x > y)
            {
                x = gcd_val;
            }
            else
            {
                y = gcd_val;
            }
            gcd_val = gcd(x, y);
            ll lcm_val = x * y / gcd_val;
            if (x > y)
            {
                x = lcm_val;
            }
            else
            {
                y = lcm_val;
            }

            if (old_x == x && old_y == y)
                break;
        }
        cout << x + y << endl;
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