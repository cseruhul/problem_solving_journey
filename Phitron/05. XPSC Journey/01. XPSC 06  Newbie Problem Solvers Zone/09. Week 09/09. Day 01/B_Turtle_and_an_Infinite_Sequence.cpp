#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m;
        cin >> n >> m;

        ll l = max(0LL, n - m);
        ll r = m + n;
        ll temp = 0;
        for (int k = 31; k >= 0; k--)
        {
            if (((l >> k) & 1) != ((r >> k) & 1))
            {
                temp = (1LL << k);
                temp |= (temp - 1);
                break;
            }
        }

        cout << (l | temp) << endl;
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