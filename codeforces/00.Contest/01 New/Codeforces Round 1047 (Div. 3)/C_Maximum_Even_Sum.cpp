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
        ll a, b;
        cin >> a >> b;

        ll ans;
        if (b % 2 == 1)
        {
            if (a % 2 == 1)
                ans = a * b + 1;
            else
                ans = -1;
            cout << ans << newline;
            return;
        }

        ll B = b, x = 0;

        while (B % 2 == 0)
        {
            B >>= 1;
            x++;
        }

        if ((a % 2 == 1) && x == 1)
        {
            cout << "-1" << newline;
            return;
        }

        ll min_val;
        if (a % 2 == 1)
        {
            min_val = 2;
        }
        else
        {
            min_val = 1;
        }

        ll sum1 = a * min_val + b / min_val;
        ll sum2 = a * (b / 2) + 2;

        ans = max(sum1, sum2);
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