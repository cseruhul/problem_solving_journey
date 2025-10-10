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
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = n;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            ll total_time = arr[i] + (n - (i + 1));
            ans = min(ans, total_time);
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