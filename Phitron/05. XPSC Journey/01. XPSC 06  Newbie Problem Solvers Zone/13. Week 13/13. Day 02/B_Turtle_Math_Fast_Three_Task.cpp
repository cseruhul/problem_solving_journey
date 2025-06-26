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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        ll ans;

        if (sum % 3 == 0)
        {
            ans = 0;
        }
        else if (sum % 3 == 2)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }

        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 3 == 0)
            {
                ans = min(ans, 1LL);
                break;
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