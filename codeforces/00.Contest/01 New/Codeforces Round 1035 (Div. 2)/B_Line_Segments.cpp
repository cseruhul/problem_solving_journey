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
        ll n;
        cin >> n;
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        vector<ll> arr(n);
        ll tot_dist = 0, max_dist = LLONG_MIN;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            tot_dist += arr[i];

            max_dist = max(arr[i], max_dist);
        }

        ll dist = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

        ll min_dis = max(0LL, 2 * max_dist - tot_dist);

        bool flag = false;

        if (dist <= tot_dist * tot_dist)
        {
            if (dist >= min_dis * min_dis)
            {
                flag = true;
            }
        }

        if (flag)
            cout << "Yes" << newline;
        else
            cout << "No" << newline;
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