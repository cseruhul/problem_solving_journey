#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll x, y, z, total;
        cin >> x >> y >> z;

        ll rem1 = z - y;
        ll rem2 = y - x;
        ll rem = rem1 - rem2;

        if (rem >= 0 && rem % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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