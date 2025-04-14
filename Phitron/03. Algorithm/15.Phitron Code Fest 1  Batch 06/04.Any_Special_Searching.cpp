#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, ans;
    long long s;

    cin >> n;
    vector<long long> arr(n);
    vector<long long> pref_sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pref_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }

    cin >> q;

    while (q--)
    {
        ans = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (pref_sum[i] >= s)
            {
                ans = i + 1;
                break;
            }
        }

        if (ans == 0)
            cout << -1;
        else
            cout << ans;

        cout << "\n";
    }

    return 0;
}