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
        int n;
        cin >> n;

        vector<int> bricks(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> bricks[i];
        }

        int ans = 1;

        for (int i = 2; i <= n; i++)
        {
            if (bricks[i] > bricks[ans])
            {
                ans = i;
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