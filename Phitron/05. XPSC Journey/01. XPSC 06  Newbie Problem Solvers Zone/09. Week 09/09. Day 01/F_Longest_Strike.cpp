#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        unordered_map<ll, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        int left = arr[0], right = arr[n - 1];

        for (int i = 0; i < n / 2; i++)
        {
            if (mp[arr[i]] >= k)
            {
                continue;
            }
            else
            {
                while (mp[arr[i]] < k && i <= n / 2)
                {
                    i++;
                }
                left = arr[i];
            }
        }

        for (int j = n - 1; j >= n / 2; j--)
        {
            if (mp[arr[j]] >= k)
            {
                continue;
            }
            else
            {
                while (mp[arr[j]] < k && j >= n / 2)
                {
                    j--;
                }
                right = arr[j];
            }
        }
        if (left > right)
            cout << -1 << endl;
        else
            cout << left << " " << right << endl;
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