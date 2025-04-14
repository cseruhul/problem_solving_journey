#include <bits/stdc++.h>
using namespace std;

int tetranaccito(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;

    int dp[65];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << tetranaccito(n) << endl;

    return 0;
}
