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

        vector<ll> arr(n);

        ll max_num = LONG_LONG_MIN;
        map<ll, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = true;
            max_num = max(max_num, arr[i]);
        }

        vector<ll> differet_arr(n);

        for (int i = 0; i < n; i++)
        {
            differet_arr[i] = max_num - arr[i];
        }

        ll gcd_val = 0;
        for (auto item : differet_arr)
        {
            if (item != 0)
            {
                gcd_val = __gcd(item, gcd_val);
            }
        }
        gcd_val = max(gcd_val, 1LL);

        sort(arr.begin(), arr.end());

        ll num = arr.back() - gcd_val;
        ll sum1 = accumulate(arr.begin(), arr.end(), 0);
        // cout << sum1 << newline;
        int i = n - 1;
        for (; i >= 0; i--)
        {
            if (mp.find(num) == mp.end())
            {
                sum1 += (arr.end() - lower_bound(arr.begin(), arr.end(), num)) * gcd_val;
                break;
            }
            // num -= gcd_val;
        }
        ll sum2 = accumulate(arr.begin(), arr.end(), 0) + n * gcd_val;
        if (i < 0)
            cout << sum2 / gcd_val << newline;
        else
            cout << sum1 / gcd_val << newline;
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