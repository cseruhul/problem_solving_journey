#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll a, b;
        cin >> a >> b;

        ll x, y, z;

        if (b == 1)
        {
            cout << "NO" << endl;
            return;
        }

        if (b < 3)
        {
            z = a * b * 2;
        }
        else
        {
            z = a * b;
        }

        x = z - a;
        y = z - x;

        cout << "YES\n"
             << x << " " << y << " " << z << endl;
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