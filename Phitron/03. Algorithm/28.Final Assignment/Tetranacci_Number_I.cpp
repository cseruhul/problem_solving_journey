#include <bits/stdc++.h>
using namespace std;

int dp[35];

int tetranacci_sequence(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    int a = tetranacci_sequence(n - 1);
    int b = tetranacci_sequence(n - 2);
    int c = tetranacci_sequence(n - 3);
    int d = tetranacci_sequence(n - 4);
    dp[n] = a + b + c + d;
    return dp[n];
}

int main()
{
    int n, ans;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    ans = tetranacci_sequence(n);
    cout << ans;

    return 0;
}