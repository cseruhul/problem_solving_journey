#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m, q;
        cin >> n >> m >> q;

        multiset<int> teachers;

        for (int i = 0; i < m; i++)
        {
            int pos;
            cin >> pos;
            teachers.insert(pos);
        }

        while (q--)
        {
            int david;
            cin >> david;
            // cout << "\nDavid " << david << endl;
            auto it = teachers.lower_bound(david);

            if (it == teachers.begin())
            {
                cout << (*it - 1) << endl;
                continue;
            }
            if (it == teachers.end())
            {
                --it;
                cout << n - *it << endl;
                continue;
            }

            int t2 = *it;
            --it;
            int t1 = *it;

            int mid = (t1 + t2) / 2;

            int mv = min(t2 - mid, mid - t1);

            cout << mv << endl;
        }
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