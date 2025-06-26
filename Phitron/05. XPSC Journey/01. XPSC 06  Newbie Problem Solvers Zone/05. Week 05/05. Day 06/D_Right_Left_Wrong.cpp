#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        string str;
        cin >> n;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> pref_sum(n);
        pref_sum[0] = arr[0];

        for (ll i = 1; i < n; i++)
        {
            pref_sum[i] = pref_sum[i - 1] + arr[i];
        }
        cin >> str;

        ll l = 0, r = n - 1, ans = 0;
        // for (auto item : pref_sum)
        //     cout << item << " ";
        // cout << endl;
        while (l < r)
        {
            while (l < r && str[l] != 'L')
            {
                l++;
            }

            while (l < r && str[r] != 'R')
            {
                r--;
            }
            // cout << "L = " << l << " R = " << r << endl;
            // cout << pref_sum[r] << endl;
            if (l < r && str[l] == 'L' && str[r] == 'R')
            {
                if (l == 0)
                {
                    ans += pref_sum[r];
                }
                else
                {
                    ans += pref_sum[r] - pref_sum[l - 1];
                }
                l++, r--;
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