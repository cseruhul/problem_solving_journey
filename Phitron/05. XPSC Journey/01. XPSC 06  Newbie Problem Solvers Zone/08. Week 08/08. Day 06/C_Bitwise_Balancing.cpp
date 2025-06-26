#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    bool is_kth_bit_on(ll n, ll k)
    {
        return ((n >> k) & 1);
    }

    ll turn_kth_bit_on(ll n, ll k)
    {
        return (n | (1LL << k));
    }

    ll turn_kth_bit_off(ll n, ll k)
    {
        return (n & (~(1LL << k)));
    }

    void solve()
    {
        ll a = 0, b, c, d;
        cin >> b >> c >> d;

        a = b;

        ll MSB = max({__lg(b), __lg(c), __lg(d)});

        for (int k = 0; k <= MSB; k++)
        {
            if (!is_kth_bit_on(b, k) && is_kth_bit_on(d, k))
            {
                a = turn_kth_bit_on(a, k);
            }

            if (is_kth_bit_on(c, k) && is_kth_bit_on(d, k))
            {
                a = turn_kth_bit_off(a, k);
            }
        }

        if (((a | b) - (a & c)) ==  d)
            cout << a << endl;
        else
            cout << -1 << endl;
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