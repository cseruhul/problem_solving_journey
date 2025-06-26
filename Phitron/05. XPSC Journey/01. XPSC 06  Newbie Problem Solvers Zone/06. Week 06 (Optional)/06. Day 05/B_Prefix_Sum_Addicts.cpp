#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> pref_sum(n + 1, 0);
        vector<ll> arr(n + 1);

        for (int i = n - k + 1; i <= n; i++)
        {
            cin >> pref_sum[i];
        }

        if (k == 1 || n == 1)
        {
            cout << "YES" << endl;
            return;
        }

        for (int i = n; i > n - k + 1; i--)
        {
            arr[i] = pref_sum[i] - pref_sum[i - 1];
        }

        ll sum = pref_sum[n - k + 1];

        for (int i = n - k + 1; i > 0; i--)
        {
            if (i == 1)
            {
                arr[i] = sum;
            }
            else
            {
                arr[i] = arr[i + 1];
                sum -= arr[i];
                pref_sum[i - 1] = sum;
            }
        }

        if (is_sorted(arr.begin() + 1, arr.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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