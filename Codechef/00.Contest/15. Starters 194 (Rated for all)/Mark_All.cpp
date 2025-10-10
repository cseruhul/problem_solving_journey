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
            cin >> arr[i];

        ll ans = min(arr[0], arr[n - 1]);

        ll prefix = arr[0];

        for (int i = 0; i < n; i++)
        {
            ans = min(ans, arr[i] + prefix);
            prefix = min(prefix, arr[i]);
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