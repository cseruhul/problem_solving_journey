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
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];

            sum += arr[i];
        }

        bool flag = true;
        ll all = sum / n, remain = 0;
        // cout << all << " ";
        for (ll i = 0; i < n; i++)
        {

            if (arr[i] > all)
            {
                remain += arr[i] - all;
            }
            else if (arr[i] < all)
            {
                remain -= (all - arr[i]);
            }

            if (remain < 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
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