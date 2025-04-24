#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = b - 1;
        b = 1;

        for (int i = 0; i < n; i++)
        {
            ans += min(a, b + arr[i]) - 1;
            b = 1;
        }

        cout << ans + 1 << endl;
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