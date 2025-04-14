#include <bits/stdc++.h>
using namespace std;

int dp[100005];

bool can_reach(int n, int target)
{
    if (n == target)
        return true;
    if (n > target)
        return false;

    if (dp[n] != -1)
        return dp[n];
    dp[n] = can_reach(n + 3, target) || can_reach(n * 2, target);
    return dp[n];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int target;
        cin >> target;

        memset(dp, -1, sizeof(dp));
        bool ans = can_reach(1, target);

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}