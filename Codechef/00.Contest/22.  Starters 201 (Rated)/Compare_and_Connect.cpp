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
        int n, m;
        cin >> n >> m;

        string ans = "";

        if (n >= 1 && m >= 1)
        {
            for (int i = 0; i < 2 * n; i++)
                ans += '<';
            for (int i = 0; i < m - 1; i++)
                ans += "><";
            ans += '>';
        }
        else if (m == 0)
        {
            for (int i = 0; i < 2 * n - 3; i++)
                ans += '<';

            ans += "=<";
        }
        else
        {
            for (int i = 0; i < m - 2; i++)
                ans += "><";
            ans += ">=>";
        }

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