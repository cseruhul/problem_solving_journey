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
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll mx_time = LLONG_MIN;
        ll sum = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx_time = max(mx_time, arr[i]);
            sum += arr[i];
        }

        if (mx_time * 2 >= sum)
        {
            ans = 2 * mx_time;
        }
        else
        {
            ans = sum;
        }

        cout << ans << newline;
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