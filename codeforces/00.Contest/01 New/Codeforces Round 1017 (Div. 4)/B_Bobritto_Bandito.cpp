#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m, l, r, lp, rp;
        cin >> n >> m >> l >> r;

        if (l == 0)
        {
            lp = 0;
            rp = m;
        }
        else if (r == 0)
        {
            rp = 0;
            lp = -m;
        }
        else
        {
            rp = r;
            lp = 0 - (m - r);
        }

        cout << lp << " " << rp << endl;
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