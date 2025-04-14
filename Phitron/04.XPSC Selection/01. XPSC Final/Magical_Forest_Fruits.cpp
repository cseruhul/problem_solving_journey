#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> trees(n + 1);
    vector<long long> pref_sum(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> trees[i];
    }

    pref_sum[0] = 0;
    pref_sum[1] = trees[1];

    for (int i = 2; i <= n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + trees[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long ans;
        ans = pref_sum[r] - pref_sum[l - 1];

        cout << ans << endl;
    }

    return 0;
}