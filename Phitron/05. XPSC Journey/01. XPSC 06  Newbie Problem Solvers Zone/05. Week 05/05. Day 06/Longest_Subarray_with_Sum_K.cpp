#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k, ans = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        unordered_map<int, int> mp_indx;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == k)
            {
                ans = i + 1;
            }

            if (mp_indx.find(sum - k) != mp_indx.end())
            {
                ans = max(ans, i - mp_indx[sum - k]);
            }

            if (mp_indx.find(sum) == mp_indx.end())
            {
                mp_indx[sum] = i;
            }
        }

        cout << ans << endl;
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