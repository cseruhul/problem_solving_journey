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
        int n, k;
        cin >> n >> k;

        string bin_str;
        cin >> bin_str;

        vector<int> one(n + 1), zero(n + 1), cnt(n + 1);
        // cout << bin_str << newline;
        for (int i = 1; i <= n; i++)
        {
            one[i] = one[i - 1];
            if (bin_str[i - 1] == '1')
                one[i]++;
        }

        for (int i = 0; i <= n; i++)
        {
            zero[i] = i - one[i];
            cnt[i] = zero[i] - one[i];
        }

        auto is_ok = [&](int mid)
        {
            int chunks = 0, idx = 1;

            while (idx <= n)
            {
                int left_zeroes = zero[idx - 1];
                int mx_idx = cnt[idx - 1];
                bool flag = false;

                for (int i = idx; i <= n; i++)
                {
                    if (cnt[i] > mx_idx)
                    {
                        mx_idx = cnt[i];
                    }

                    if ((one[i] - left_zeroes + mx_idx) >= mid)
                    {
                        flag = true;
                        idx = i + 1;
                        chunks++;
                        break;
                    }
                }

                if (!flag)
                    break;
                if (chunks == k)
                    break;
            }

            return chunks >= k;
        };

        int l = 1, r = n, mid, ans = 1;

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
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}