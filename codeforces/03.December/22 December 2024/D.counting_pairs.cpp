#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y, sum = 0, ans = 0;
        cin >> n >> x >> y;

        vector<long long int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long another_sum = arr[i] + arr[j];
                if (((sum - another_sum) >= x) && ((sum - another_sum) <= y))
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}