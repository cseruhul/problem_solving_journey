#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 1;
        int mx_dist, last_idx;

        for (int k = 0; k < 21; k++)
        {
            vector<int> set_bits;
            for (int i = 0; i < n; i++)
            {
                if ((arr[i] >> k) & 1)
                {
                    set_bits.push_back(i);
                }
            }
            mx_dist = 0, last_idx = -1;

            for (auto item : set_bits)
            {
                mx_dist = max(mx_dist, item - last_idx);
                last_idx = item;
            }

            mx_dist = max(mx_dist, n - last_idx);

            if (last_idx > -1)
            {
                ans = max(ans, mx_dist);
            }
        }

        cout << ans << endl;
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