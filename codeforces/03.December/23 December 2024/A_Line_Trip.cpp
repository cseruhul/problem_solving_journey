#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, ans = INT_MIN;
        cin >> n >> x;
        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if ((arr[i] - arr[i - 1]) > ans)
            {
                ans = arr[i] - arr[i - 1];
            }
        }

        if (2 * (x - arr[n]) > ans)
            ans = 2 * (x - arr[n]);

        cout << ans << endl;
    }

    return 0;
}