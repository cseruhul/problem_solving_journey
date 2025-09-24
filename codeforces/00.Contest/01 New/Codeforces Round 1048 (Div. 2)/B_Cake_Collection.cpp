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
        ll n, m;
        cin >> n >> m;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        ll min_time = min(n, m);
        ll ans = 0;

        for (int i = 0; i < min_time; i++)
        {
            ans += arr[i] * (m - i);
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