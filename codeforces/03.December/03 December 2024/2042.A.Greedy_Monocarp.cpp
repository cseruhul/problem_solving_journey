#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }

        sort(coins.rbegin(), coins.rend());

        int total_sum = 0, coins_to_add = 0;
        for (int i = 0; i < n; i++)
        {
            total_sum += coins[i];

            if (total_sum > k)
            {
                total_sum -= coins[i];
                break;
            }
        }

        cout << k - total_sum << endl;
    }

    return 0;
}