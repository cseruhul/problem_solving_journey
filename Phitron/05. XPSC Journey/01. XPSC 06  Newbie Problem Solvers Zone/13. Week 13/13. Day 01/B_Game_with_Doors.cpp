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
        int l1, l2, r1, r2;
        cin >> l1 >> r1;
        cin >> l2 >> r2;

        int dist = min(r1, r2) - max(l1, l2) + 1;
        int ans = dist - 1;

        if (dist <= 0)
        {
            ans = 1;
        }
        else
        {
            ans += (l1 != l2);
            ans += (r1 != r2);
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