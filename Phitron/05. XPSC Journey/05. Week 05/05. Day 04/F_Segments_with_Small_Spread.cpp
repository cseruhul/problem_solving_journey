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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        multiset<ll> ml;
        ll l = 0, r = 0, ans = 0;

        while (r < n)
        {
            ml.insert(arr[r]);
            ll mn = *ml.begin(), mx = *ml.rbegin();

            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
            else
            {
                while (l <= r)
                {
                    ll MN = *ml.begin(), MX = *ml.rbegin();
                    if (MX - MN <= k)
                        break;

                    ml.erase(ml.find(arr[l]));
                    l++;
                }

                ll MN = *ml.begin(), MX = *ml.rbegin();
                if (MX - MN <= k)
                {
                    ans += (r - l + 1);
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