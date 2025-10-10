#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const ll INF = 1e9 + 7;
vector<int> dp;

class Ruhul_Amin
{
public:
    int buy_flower(int n)
    {
        if (n == 0)
            return 0;
        if (n < 0)
            return INF;

        if (dp[n] != -1)
            return dp[n];

        int coin = INF;
        coin = min(coin, buy_flower(n - 2) + 4);
        coin = min(coin, buy_flower(n - 3) + 5);

        dp[n] = coin;

        return coin;
    }

    void solve()
    {
        int n, ans;
        cin >> n;

        dp.assign(n + 1, -1);
        ans = buy_flower(n);

        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int T;
    cin >> T;

    while (T--)
        ruhul.solve();

    return 0;
}