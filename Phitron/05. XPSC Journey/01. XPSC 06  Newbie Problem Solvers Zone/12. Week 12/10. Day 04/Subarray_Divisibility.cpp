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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[i] = x % n;
        }

        vector<ll> pref_sum(n + 1);
        pref_sum[0] = 0;

        for (int i = 0; i < n; i++)
        {
            pref_sum[i + 1] = pref_sum[i] + arr[i];
        }

        // for (auto item : pref_sum)
        // {
        //     cout << item << " ";
        // }
        // cout << newline;

        for (int i = 0; i <= n; i++)
        {
            pref_sum[i] = (pref_sum[i] + n) % n;
        }
        // for (auto item : pref_sum)
        // {
        //     cout << item << " ";
        // }
        // cout << newline;
        map<ll, ll> mp;
        ll ans = 0;

        for (auto item : pref_sum)
        {
            ans += mp[item];
            mp[item]++;
        }
        // for (auto item : mp)
        //     cout << item.first << " " << item.second << endl;
        cout << ans;
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