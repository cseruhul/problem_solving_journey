#include <bits/stdc++.h>
using namespace std;

int value[1005];
int weight[1005];

int dp[1005][1005];

int knapsack(int n, int max_weight)
{
    if (n < 0 || max_weight <= 0)
        return 0;

    if (dp[n][max_weight] != -1)
        return dp[n][max_weight];

    if (max_weight >= weight[n])
    {
        int option1 = knapsack(n - 1, max_weight - weight[n]) + value[n];
        int option2 = knapsack(n - 1, max_weight);

        dp[n][max_weight] = max(option1, option2);
        return dp[n][max_weight];
    }
    else
    {
        dp[n][max_weight] = knapsack(n - 1, max_weight);
        return dp[n][max_weight];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max_weight;
    cin >> n >> max_weight;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> value[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << knapsack(n - 1, max_weight) << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < max_weight; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}