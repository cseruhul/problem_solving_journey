#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        map<ll, multiset<int>> stations;

        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;

            stations[x].insert(i);
        }

        while (k--)
        {
            ll a, b;
            cin >> a >> b;

            if (stations.count(a) && stations.count(b))
            {
                auto l = stations[a].begin();
                auto r = stations[b].rbegin();

                if (*l < *r)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
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