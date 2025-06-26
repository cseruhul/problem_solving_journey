#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n);

        for (auto &item : arr)
            cin >> item;

        ll ans = LLONG_MAX, sum = 0;
        ll l = 0, r = 0;

        while (r < n)
        {
            sum += arr[r];
            if (sum < k)
            {
                r++;
            }
            else
            {
                while (l <= r)
                {
                    if (sum < k)
                        break;

                    ans = min(ans, r - l + 1);

                    sum -= arr[l];
                    l++;
                }
                r++;
            }
        }

        if (ans == LLONG_MAX)
            ans = -1;
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