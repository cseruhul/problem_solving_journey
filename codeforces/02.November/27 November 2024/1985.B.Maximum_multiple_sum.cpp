#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, x, ans, max_sum = INT_MIN, sum;

    cin >> t;

    while (t--)
    {
        max_sum = INT_MIN;
        cin >> n;
        x = 2;
        for (int i = x; i <= n; i++)
        {
            sum = i * (((n / i) * (n / i + 1)) / 2);
            // cout << sum << " ";
            if (sum > max_sum)
            {
                max_sum = sum;
                ans = i;
            }
        }

        cout << ans << endl;
    }
    return 0;
}