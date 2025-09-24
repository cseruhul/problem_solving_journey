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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        auto ok = [&](int time)
        {
            int cnt = 1, l = 0;

            for (int r = 0; r < n; r++)
            {
                if ((arr[r] - arr[l]) > 2 * time)
                {
                    l = r;
                    cnt++;
                }
            }

            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
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