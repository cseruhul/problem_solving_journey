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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(k);

        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        vector<ll> dist_arr(k);

        for (ll i = 0; i < k; i++)
        {
            dist_arr[i] = abs(n - arr[i]);
        }

        vector<ll> suff_dist(k);
        suff_dist[k - 1] = dist_arr[k - 1];

        for (int i = k - 2; i >= 0; i--)
        {
            suff_dist[i] = suff_dist[i + 1] + dist_arr[i];
        }

        // for (auto item : arr)
        //     cout << item << " ";
        // cout << newline;

        // for (auto item : dist_arr)
        //     cout << item << " ";
        // cout << newline;

        // for (auto item : suff_dist)
        //     cout << item << " ";
        // cout << newline;

        ll l = 0, r = k, ans = 0, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (suff_dist[mid] < n)
            {
                ans = k - mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << newline;
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