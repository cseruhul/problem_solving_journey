#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        multiset<ll> ticket;
        vector<ll> price(m);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ticket.insert(x);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }

        for (int i = 0; i < m; i++)
        {
            auto it = ticket.upper_bound(price[i]);

            if (it == ticket.begin())
                cout << -1 << endl;
            else
            {
                cout << *(--it) << endl;
                ticket.erase(it);
            }
        }
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