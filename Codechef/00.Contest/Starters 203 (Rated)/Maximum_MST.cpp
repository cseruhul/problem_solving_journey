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
        int m = n * (n - 1) / 2;

        vector<ll> weight(m);

        for (int i = 0; i < m; i++)
        {
            cin >> weight[i];
        }

        sort(weight.begin(), weight.end());

        vector<int> pref(m + 1, 0);

        for (int i = 1; i <= m; i++)
        {
            double val = sqrt(1.0 + 8.0 * i);
            int sum = (int)ceil((1.0 + val) / 2.0);

            pref[i] = min(n - 1, sum - 1);
        }

        int wanted = n - 1;

        ll ans = 0;

        for (int i = m; i >= 1 and wanted > 0; i--)
        {
            if (pref[i - 1] < wanted)
            {
                ans += weight[i - 1];
                wanted--;
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