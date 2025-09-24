#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;
ll a[100010];

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, i, j, c, k, t;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (j = 30; j >= 0; j--)
        {
            c = 0;
            for (i = 1; i <= n; i++)
                if ((a[i] >> j) & 1)
                    c++, k = i;
            if (c == 1)
                break;
        }
        if (c == 1)
            swap(a[1], a[k]);
        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
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