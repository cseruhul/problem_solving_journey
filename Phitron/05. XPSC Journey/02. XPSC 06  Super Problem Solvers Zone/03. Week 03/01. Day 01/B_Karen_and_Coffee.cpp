#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 2e5 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(MOD, 0);
        vector<int> pref_sum(MOD, 0);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;

            arr[l]++;
            arr[r + 1]--;
        }

        for (int i = 1; i < MOD; i++)
        {
            arr[i] += arr[i - 1];
            pref_sum[i] += pref_sum[i - 1] + (arr[i] >= k);
        }

        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            int ans = pref_sum[b] - pref_sum[a - 1];
            cout << ans << newline;
        }
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