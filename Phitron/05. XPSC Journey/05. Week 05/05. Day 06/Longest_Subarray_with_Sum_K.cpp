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

        vector<int> pref_sum(n);
        vector<int> suff_sum(n);
        pref_sum[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            pref_sum[i] = pref_sum[i - 1] + arr[i];
        }
        for (auto item : pref_sum)
            cout << item << " ";
        cout << endl;

        suff_sum[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff_sum[i] = suff_sum[i + 1] + arr[i];
        }
        for (auto item : suff_sum)
            cout << item << " ";
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            if (pref_sum[i] == k)
                ans = i + 1;
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