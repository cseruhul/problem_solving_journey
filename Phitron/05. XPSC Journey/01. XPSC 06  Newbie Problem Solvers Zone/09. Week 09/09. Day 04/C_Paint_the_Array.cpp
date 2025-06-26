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

    void solve()
    {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll gcd1 = 0;

        for (int i = 0; i < n; i += 2)
        {
            gcd1 = GCD(gcd1, arr[i]);
        }

        ll gcd2 = 0;
        for (int i = 1; i < n; i += 2)
        {
            gcd2 = GCD(gcd2, arr[i]);
        }

        bool flag = true;
        ll ans = 0;

        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] % gcd1 == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            ans = gcd1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % gcd2 == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                ans = gcd2;
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
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}