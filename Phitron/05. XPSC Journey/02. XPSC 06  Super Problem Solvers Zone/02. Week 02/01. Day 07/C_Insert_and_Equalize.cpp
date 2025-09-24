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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        vector<ll> differet_arr(n);
        ll max_num = arr.back();

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            differet_arr[i] = max_num - arr[i];
        }

        ll gcd_val = 0;
        for (auto item : differet_arr)
        {
            gcd_val = __gcd(item, gcd_val);
        }

        gcd_val = max(gcd_val, 1LL);
        int j = n - 1;

        while (true)
        {
            while (j >= 0 && arr[j] > max_num)
            {
                j--;
            }

            if (j < 0 || arr[j] != max_num)
            {
                break;
            }
            max_num -= gcd_val;
        }

        ll ans = ((arr.back() * (n + 1)) - (sum + max_num)) / gcd_val;
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