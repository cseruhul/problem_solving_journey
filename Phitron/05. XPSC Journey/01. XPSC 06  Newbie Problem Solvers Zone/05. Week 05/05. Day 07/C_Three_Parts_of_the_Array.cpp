#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<int> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll l = 0, r = n - 1, sum_1 = 0, sum_3 = 0, ans = 0;

        while (l <= r)
        {
            if (sum_1 < sum_3)
            {
                sum_1 += arr[r];
                r--;
            }
            else
            {
                sum_3 += arr[l];
                l++;
            }

            if (sum_1 == sum_3)
                ans = sum_1;
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