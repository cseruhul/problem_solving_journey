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
        int n, m, k;
        cin >> n >> m >> k;

        int ans = 0;

        int total = n * m;
        ans = max((total - n * ((k / n) + ((k % n) != 0))), (total - m * ((k / m) + ((k % m) != 0))));

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