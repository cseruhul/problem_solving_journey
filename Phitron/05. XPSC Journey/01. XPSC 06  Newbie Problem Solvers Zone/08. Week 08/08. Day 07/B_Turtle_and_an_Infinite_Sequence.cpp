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

        if (n == 0)
        {
            cout << (1LL << m) - 1 << endl;
        }
        else
        {
            if (m == 0)
                cout << n << endl;
            else
                cout << ((n - 1) | n | (n + 1)) << endl;
        }
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