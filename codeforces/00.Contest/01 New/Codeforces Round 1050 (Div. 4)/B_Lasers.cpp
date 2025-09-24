#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<ll> arr1(n);
        vector<ll> arr2(m);

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int j = 0; j < m; j++)
        {
            cin >> arr2[j];
        }

        ll ans = n + m;
        cout << ans << newline;
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