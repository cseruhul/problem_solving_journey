#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll l, r;
        cin >> l >> r;
        ll x, y;

        if (l * 2 > r)
        {
            x = -1;
            y = -1;
        }
        else
        {
            x = l;
            y = 2 * l;
        }

        cout << x << " " << y << endl;
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