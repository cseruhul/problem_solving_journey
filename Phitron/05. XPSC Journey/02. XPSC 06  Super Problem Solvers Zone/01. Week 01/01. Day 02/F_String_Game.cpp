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
        string t, p;
        cin >> t >> p;

        int n = t.size();
        int m = p.size();

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // cout << t << " " << p << endl;
        // for (auto item : arr)
        //     cout << item << " ";

        auto ok = [&](int mid)
        {
            vector<bool> bad(n + 1, false);
            for (int i = 0; i < mid; i++)
            {
                bad[arr[i]] = true;
            }
            int j = 0;
            bool is_ok = false;
            for (int i = 0; i < n; i++)
            {
                if (t[i] == p[j] && bad[i + 1] == 0)
                {
                    j++;
                }

                if (j == m)
                {
                    is_ok = true;
                    break;
                }
            }

            return is_ok;
        };

        int l = 0, r = n, mid, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans;
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