#include <bits/stdc++.h>
using namespace std;

int n, max_weight;

vector<int> values(1005);
vector<int> weights(1005);
int dp[1005][1005];

int knapsack(int i, int max_weight)
{
    // base case
    if (i < 0 || max_weight <= 0)
        return 0;

    if (dp[i][max_weight] != -1)
        return dp[i][max_weight];

    // faith of leaf
    // function calling
    if (weights[i] <= max_weight)
    {
        int op1 = knapsack(i - 1, max_weight - weights[i]) + values[i];
        int op2 = knapsack(i - 1, max_weight);

        dp[i][max_weight] = max(op1, op2);

        return dp[i][max_weight];
    }
    else
    {
        dp[i][max_weight] = knapsack(i - 1, max_weight);
        return dp[i][max_weight];
    }
}

int main()
{
    cin >> n >> max_weight;

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
        cin >> values[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << knapsack(n - 1, max_weight);

    return 0;
}