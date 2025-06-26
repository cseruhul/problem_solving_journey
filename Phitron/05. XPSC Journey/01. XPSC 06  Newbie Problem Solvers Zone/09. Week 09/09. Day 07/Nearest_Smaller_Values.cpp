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
        int n;
        cin >> n;
        map<ll, ll> val;
        val[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            val[x] = i;

            auto itr = val.find(x);
            auto itr1 = prev(itr);

            cout << (*itr1).second << " ";
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