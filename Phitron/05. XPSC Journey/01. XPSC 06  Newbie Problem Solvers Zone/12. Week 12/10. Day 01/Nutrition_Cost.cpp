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
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(a[i]) == mp.end())
            {
                mp[a[i]] = b[i];
            }
            else
            {
                mp[a[i]] = min(mp[a[i]], b[i]);
            }
        }

        vector<int> arr;
        for (auto item : mp)
        {
            arr.push_back(item.second);
        }

        sort(arr.begin(), arr.end());
        int sz = arr.size();

        vector<int> pref_sum(sz);
        pref_sum[0] = arr[0];

        for (int i = 1; i < sz; i++)
        {
            pref_sum[i] = pref_sum[i - 1] + arr[i];
        }

        int ans = 0;

        for (int i = 0; i < sz; i++)
        {
            int x = i + 1;
            int y = pref_sum[i];

            ans = max(ans, ((c * x) - y));
        }

        cout << ans << newline;
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