#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int o_l = 0, o_r = 0, n_l = 0, n_r = 0, interval = INT_MIN, n, s, m;
        cin >> n >> s >> m;

        while (n--)
        {
            cin >> n_l >> n_r;
            interval = max(interval, (n_l - o_r));
            o_l = n_l;
            o_r = n_r;
        }

        interval = max(interval, (m - n_r));

        if (interval >= s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}