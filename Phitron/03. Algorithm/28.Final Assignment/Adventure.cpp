#include <bits/stdc++.h>
using namespace std;

int max_weight, n;
int value[1005];
int weight[1005];

int dp[1005][1005];

int treasure_humter(int n, int max_weight)
{
    if (n < 0 || max_weight <= 0)
        return 0;

    if (dp[n][max_weight] != -1)
        return dp[n][max_weight];

    if (weight[n] <= max_weight)
    {
        int option1 = treasure_humter(n - 1, max_weight - weight[n]) + value[n];
        int option2 = treasure_humter(n - 1, max_weight);

        dp[n][max_weight] = max(option1, option2);

        return dp[n][max_weight];
    }
    else
    {
        dp[n][max_weight] = treasure_humter(n - 1, max_weight);
        return dp[n][max_weight];
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        cin >> n >> max_weight;
        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }

        cout << treasure_humter(n - 1, max_weight) << endl;
    }
    return 0;
}