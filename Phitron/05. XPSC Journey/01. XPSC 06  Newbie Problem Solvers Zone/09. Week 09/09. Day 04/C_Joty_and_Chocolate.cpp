#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    ll GCD(ll a, ll b)
    {
        return __gcd(a, b);
    }

    ll LCM(ll a, ll b)
    {
        return a * b / (__gcd(a, b));
    }

    void solve()
    {
        ll n, a, b, p, q, ans = 0;
        cin >> n >> a >> b >> p >> q;

        ans += (n / a) * p;
        ans += (n / b) * q;

        ll overlap = n / LCM(a, b);
        ans -= overlap * (p + q);

        ans += (overlap * (max(p, q)));

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