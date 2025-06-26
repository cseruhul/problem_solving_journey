#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> divisor;

        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisor.push_back(i);
                if ((n / i) != i)
                    divisor.push_back(n / i);
            }
        }

        sort(divisor.begin(), divisor.end());

        if (k > divisor.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << divisor[k - 1] << endl;
        }
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