#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll gcd = 0, ans = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            gcd = __gcd(gcd, arr[i]);
        }

        if (gcd != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                for (int j = i; j >= 0; j--)
                {
                    if (__gcd(arr[i], arr[j]) == 1)
                    {
                        // cout << i << " " << j << endl;
                        ans = max(ans, (i + j + 1LL * 2));
                    }
                }
            }
            cout << ans << endl;
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