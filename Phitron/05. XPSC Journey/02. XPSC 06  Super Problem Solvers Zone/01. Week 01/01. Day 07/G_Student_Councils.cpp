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
        ll k, n;
        cin >> k >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        auto is_ok = [&](ll councils)
        {
            ll sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] < councils)
                    sum += arr[i];
                else
                    sum += councils;
            }

            return sum >= councils * k;
        };

        ll l = 0, r = 1e17, ans = 0, mid;

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