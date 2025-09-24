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
        ll n, m;
        cin >> n >> m;

        ll ans = 0;
        ll prev_score = 0;
        ll curr_score = 0;

        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;

            ll score_diff = a - prev_score;
            ll wanted_score = curr_score ^ b;

            if (score_diff % 2 == wanted_score)
            {
                ans += score_diff;
            }
            else
            {
                ans += (score_diff - 1);
            }

            curr_score = b;
            prev_score = a;
        }
        ans += (m - prev_score);
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