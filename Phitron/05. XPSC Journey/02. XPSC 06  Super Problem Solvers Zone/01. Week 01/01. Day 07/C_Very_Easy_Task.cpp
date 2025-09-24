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
        ll n, x, y;
        cin >> n >> x >> y;

        auto is_ok = [&](ll time)
        {
            if (time < min(x, y))
                return false;

            ll question = 1;
            time = time - min(x, y);
            question += (time / x) + (time / y);
            // cout << time << " " << question << newline;

            return question <= n;
        };

        ll l = 0, r = n * max(x, y), ans = 0, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (is_ok(mid))
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