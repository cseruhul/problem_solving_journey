#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, s;
        cin >> n >> s;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll l = 0, r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += arr[r];

            if (sum <= s)
            {
                ans += r - l + 1;
            }
            else
            {
                while (sum > s)
                {
                    sum -= arr[l];
                    l++;
                }

                if (sum <= s)
                {
                    ans += r - l + 1;
                }
            }

            r++;
        }

        cout << ans << endl;
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