#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const ll MOD = 1e18 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        string receipe;
        cin >> receipe;

        ll nB, nS, nC, pB, pS, pC;
        cin >> nB >> nS >> nC;
        cin >> pB >> pS >> pC;

        ll rubles;
        cin >> rubles;
        ll b = 0, s = 0, c = 0;

        for (auto item : receipe)
        {
            if (item == 'B')
                b++;
            else if (item == 'S')
                s++;
            else
                c++;
        }

        auto calculation = [&](ll mid)
        {
            ll minimum_cnt = 0;
            ll n_b = max(mid * b - nB, minimum_cnt);
            ll n_s = max(mid * s - nS, minimum_cnt);
            ll n_c = max(mid * c - nC, minimum_cnt);

            ll total_price = n_b * pB + n_s * pS + n_c * pC;
            // cout << "MID: " << mid << newline;
            return total_price <= rubles;
        };

        ll l = 0, r = rubles + 100, mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (calculation(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
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

    ruhul.solve();

    return 0;
}