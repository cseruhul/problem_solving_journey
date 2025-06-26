#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int l = 0, r = n - 1;
        ll ans = 0;
        while (l <= r)
        {

            if (arr[l] + arr[r] <= x)
            {
                l++;
            }
            r--;
            ans++;
        }

        cout << ans;
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