#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, a, b, total;
        cin >> n >> m >> a >> b;
        bool flag = false;

        for (ll x = 0; x <= n; ++x)
        {
            total = a * x + b * (n - x);
            if (total == m)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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