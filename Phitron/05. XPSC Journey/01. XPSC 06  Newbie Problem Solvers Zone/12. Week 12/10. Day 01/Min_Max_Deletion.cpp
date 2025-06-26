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
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll sum = 0;

        for (int i = 1; i < n; i++)
        {
            sum += min(arr[i - 1], arr[i]);
        }

        for (int i = 0; i < q; i++)
        {
            int idx;
            ll x;
            cin >> idx >> x;

            --idx;

            if (arr[idx] == x)
            {
                cout << sum << newline;
                continue;
            }

            if ((idx - 1) >= 0)
            {
                sum -= min(arr[idx - 1], arr[idx]);
                sum += min(x, arr[idx - 1]);
            }

            
            if ((idx + 1) < n)
            {
                sum -= min(arr[idx + 1], arr[idx]);
                sum += min(x, arr[idx + 1]);
            }

            arr[idx] = x;
            cout << sum << newline;
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