#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        multiset<ll> arr;

        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            arr.insert(x);
        }

        ll diff = 1, ans = 0;

        for (auto item : arr)
        {
            if (item >= diff)
            {
                ans += item - diff;
                diff++;
            }
        }
        cout << "\n";

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