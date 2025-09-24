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
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (auto item : arr)
        //     cout << item << " ";
        sort(arr.begin(), arr.end());

        long long ans = 0;
        int i = 0;
        while (!arr.empty())
        {
            ll free_cost = (i < 63 ? (c >> i) : 0LL);

            auto upper_b = upper_bound(arr.begin(), arr.end(), free_cost);

            if (upper_b != arr.begin())
            {
                arr.erase(prev(upper_b));
            }
            else
            {
                ans++;
                arr.pop_back();
            }
            i++;
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