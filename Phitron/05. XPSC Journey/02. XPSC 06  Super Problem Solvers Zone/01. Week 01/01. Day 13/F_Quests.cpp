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
        ll n, d, c;
        cin >> n >> c >> d;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end(), greater<ll>());

        auto is_ok = [&](int mid)
        {
            ll total = 0;

            for (int i = 0; i < d; i++)
            {
                if ((i % mid) < n)
                {
                    total += arr[i % mid];
                }
            }
            // cout << total << newline;
            return total >= c;
        };

        int l = 0, r = d + 2, mid, ans = 0;

        while (l < r)
        {
            mid = l + (r - l + 1) / 2;

            if (is_ok(mid))
            {
                ans = mid;
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (ans == d + 2)
        {
            cout << "Infinity" << newline;
            return;
        }

        if (ans == 0)
        {
            cout << "Impossible" << newline;
            return;
        }

        cout << (ans - 1) << newline;
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