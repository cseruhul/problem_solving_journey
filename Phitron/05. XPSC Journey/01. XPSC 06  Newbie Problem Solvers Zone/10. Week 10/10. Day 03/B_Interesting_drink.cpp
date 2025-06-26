#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll binary_search(vector<ll> &shop, int n, ll m)
    {
        int l = 0, r = n - 1;
        ll ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (shop[mid] == m)
                l = mid + 1;
            else if (m < shop[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (r == -1)
            ans = 0;
        else if (l >= n)
            ans = n;
        else
            ans = l;

        return ans;
    }

    void solve()
    {
        int n;
        cin >> n;
        vector<ll> shops(n);

        for (int i = 0; i < n; i++)
        {
            cin >> shops[i];
        }

        ll q;
        cin >> q;
        sort(shops.begin(), shops.end());

        while (q--)
        {
            ll m;
            cin >> m;
            ll ans = binary_search(shops, n, m);
            cout << ans << newline;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}