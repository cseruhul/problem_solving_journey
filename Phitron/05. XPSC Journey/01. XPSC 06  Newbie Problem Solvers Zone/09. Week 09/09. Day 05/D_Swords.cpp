#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll GCD(ll a, ll b)
    {
        return __gcd(a, b);
    }

    bool isprime(ll n)
    {
        if (n <= 1)
            return false;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    void solve()
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll x, y, z, sum = 0;

        x = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x = max(x, arr[i]);
        }

        z = x - arr[0];

        for (int i = 0; i < n; i++)
        {
            sum += abs(x - arr[i]);
            z = GCD(z, abs(x - arr[i]));
        }

        y = sum / z;

        cout << y << " " << z << endl;
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