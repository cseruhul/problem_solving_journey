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
        int n, m;
        cin >> m >> n;

        vector<tuple<int, int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            int t, z, y;
            cin >> t >> z >> y;

            arr[i] = make_tuple(t, z, y);
        }

        vector<int> can_make(n);

        auto ok = [&](int mid)
        {
            vector<int> may_be(n);
            int has = m;

            for (int i = 0; i < n; i++)
            {
                tuple<int, int, int> T = arr[i];
                int t, z, y, total, can, remainining, curr;
                t = get<0>(T);
                z = get<1>(T);
                y = get<2>(T);

                total = ((t * z) + y);
                can = (mid / total);
                remainining = mid % total;
                
                curr = ((can * z) + min(z, (remainining / t)));
                curr = min(has, curr);

                has -= curr;

                may_be[i] = curr;
            }

            if (!has)
            {
                for (int i = 0; i < n; i++)
                    can_make[i] = may_be[i];
            }

            return (!has);
        };

        int l = 0, r = 1e8, mid, ans;

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
        for (auto item : can_make)
            cout << item << " ";
        cout << newline;
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