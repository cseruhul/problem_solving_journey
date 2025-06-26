#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll l, r, mid;
        cin >> l >> r;

        cout << "YES" << endl;
        for (ll i = l; i <= r; i += 2)
        {
            cout << i << " " << (i + 1) << endl;
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