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

        vector<ll> lady_chimps(n);

        for (ll i = 0; i < n; i++)
            cin >> lady_chimps[i];

        sort(lady_chimps.begin(), lady_chimps.end());
        ll q;
        cin >> q;

        for (ll i = 0; i < q; i++)
        {
            ll height;
            cin >> height;

            auto low = lower_bound(lady_chimps.begin(), lady_chimps.end(), height);

            auto high = upper_bound(lady_chimps.begin(), lady_chimps.end(), height);

            if (low == lady_chimps.begin())
                cout << "X ";
            else
                cout << *(--low) << " ";

            if (high == lady_chimps.end())
                cout << "X";
            else
                cout << *high;

            cout << newline;
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