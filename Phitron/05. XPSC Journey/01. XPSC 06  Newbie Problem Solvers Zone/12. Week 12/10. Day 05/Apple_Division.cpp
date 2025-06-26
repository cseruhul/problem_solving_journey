#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll calculation_helper(vector<ll> &arr, int n, int idx, ll sum1, ll sum2)
    {
        if (idx == n)
        {
            return abs(sum1 - sum2);
        }

        ll choice1 = calculation_helper(arr, n, idx + 1, sum1 + arr[idx], sum2);
        ll choice2 = calculation_helper(arr, n, idx + 1, sum1, sum2 + arr[idx]);

        return min(choice1, choice2);
    }
    void solve()
    {
        int n;
        cin >> n;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << calculation_helper(arr, n, 0, 0, 0);
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
