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
        ll pref_sum = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pref_sum = arr[0];
        ll mx = arr[0];
        if (pref_sum == 0)
            ans++;
        for (int i = 1; i < n; i++)
        {
            pref_sum += arr[i];
            mx = max(mx, arr[i]);
            if (mx == (pref_sum - mx))
            {
                ans++;
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