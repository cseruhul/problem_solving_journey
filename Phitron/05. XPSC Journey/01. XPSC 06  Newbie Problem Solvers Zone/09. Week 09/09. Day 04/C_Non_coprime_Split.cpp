#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void divisors(ll n)
    {
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
                if (i != n / i)
                {
                    cout << n / i << " ";
                }
            }
        }
        cout << endl;
    }

    void solve()
    {
        ll l, r;
        cin >> l >> r;

        divisors(l);
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