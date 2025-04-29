#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, s;
        cin >> n >> s;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = 0;
        ll l = 0, r = 0;
        ll sum = 0;

        while (r < n)
        {
            sum += arr[r];

            if (sum <= s)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                sum -= arr[l];
                l++;
            }
            r++;
        }
        cout << ans << endl;
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