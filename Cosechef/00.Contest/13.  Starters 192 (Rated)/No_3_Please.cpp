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
        vector<ll> arr(n + 1);

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> pref_sum(n + 1);
        pref_sum[0] = 0;

        for (ll i = 1; i <= n; i++)
        {
            pref_sum[i] = (pref_sum[i - 1] + arr[i]) % 3;
        }

        // for (auto item : pref_sum)
        // {
        //     cout << item << " ";
        // }
        // cout << newline;
        ll idx_of_lst_multiple = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (pref_sum[i] == 0)
            {
                idx_of_lst_multiple = i;
            }
        }

        if (idx_of_lst_multiple == 0)
        {
            cout << "Yes" << newline;
            return;
        }

        vector<ll> mp(3, 0);
        bool flag = false;

        for (ll i = 0; i < idx_of_lst_multiple; i++)
        {
            mp[pref_sum[i]]++;
        }

        for (ll i = idx_of_lst_multiple; i <= n; i++)
        {
            if (mp[pref_sum[i]] == 0)
            {
                flag = true;
                break;
            }
            mp[pref_sum[i]]++;
        }

        if (flag == true)
        {
            cout << "Yes" << newline;
        }
        else
        {
            cout << "No" << newline;
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