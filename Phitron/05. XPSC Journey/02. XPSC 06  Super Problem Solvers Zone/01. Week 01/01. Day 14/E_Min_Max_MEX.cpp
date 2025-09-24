#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        auto can = [&](int x)
        {
            if (x == 0)
                return true;
            vector<int> cnt(x, 0), seen;
            int need = x, cuts = 0;
            for (int v : a)
            {
                if (v < x)
                {
                    if (cnt[v]++ == 0)
                    {
                        need--;
                        seen.push_back(v);
                    }
                }
                if (need == 0)
                {
                    cuts++;
                    need = x;
                    for (int y : seen)
                        cnt[y] = 0;
                    seen.clear();
                }
            }
            return cuts >= k;
        };

        int lo = 0, hi = n, ans = 0;
        while (lo <= hi)
        {
            int mid = (lo + hi) >> 1;
            if (can(mid))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        cout << ans << "\n";
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