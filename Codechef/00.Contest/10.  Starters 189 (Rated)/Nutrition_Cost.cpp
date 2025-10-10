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

        vector<int> A(n);
        vector<int> B(n);

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < n; i++)
            cin >> B[i];

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(A[i]) == mp.end())
            {
                mp[A[i]] = B[i];
            }
            else
            {
                mp[A[i]] = min(mp[A[i]], B[i]);
            }
        }

        vector<int> arr;

        for (auto item : mp)
        {
            arr.push_back(item.second);
        }

        sort(arr.begin(), arr.end());
        vector<int> pref_sum(arr.size());

        pref_sum[0] = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            pref_sum[i] = pref_sum[i - 1] + arr[i];
        }

        int ans = 0;

        for (int i = 0; i < pref_sum.size(); i++)
        {
            int x = i + 1;
            int y = pref_sum[i];
            ans = max(ans, ((x * c) - y));
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