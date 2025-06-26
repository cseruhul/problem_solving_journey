#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll distinct_element_count(vector<ll> &arr, ll k, ll n)
    {
        map<ll, ll> mp;
        ll l = 0, r = 0;

        ll ans = 0;

        while (r < n)
        {
            mp[arr[r]]++;

            while (mp.size() > k)
            {
                mp[arr[l]]--;

                if (mp[arr[l]] == 0)
                {
                    mp.erase(arr[l]);
                }
                l++;
            }
            ans += (r - l + 1);
            r++;
        }

        return ans;
    }

    void solve()
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << distinct_element_count(arr, k, n);
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