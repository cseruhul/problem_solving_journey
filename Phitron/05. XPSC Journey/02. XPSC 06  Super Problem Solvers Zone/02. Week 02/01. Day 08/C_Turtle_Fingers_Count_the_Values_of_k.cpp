#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e6 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int a, b, l;
        cin >> a >> b >> l;

        int ans = 0;
        for (int k = 1; k <= MOD; k++)
        {
            for (int x = 0; x <= 20; x++)
            {
                for (int y = 0; y <= 20; y++)
                {
                    if (k * pow(a, x) * pow(b, y) == l)
                        ans++;
                }
            }
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