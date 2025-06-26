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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll all_AND = arr[0];

        for (int i = 0; i < n; i++)
        {
            all_AND &= arr[i];
        }

        ll max_limit = 1LL << 31;
        ll ans = 0;

        for (ll i = 1; i <= max_limit; i <<= 1)
        {
            if (all_AND & i)
                ans += i;
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