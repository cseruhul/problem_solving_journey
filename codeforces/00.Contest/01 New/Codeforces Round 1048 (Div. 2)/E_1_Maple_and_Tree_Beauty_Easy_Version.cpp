#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;

        vector<int> parent(n + 1, 0);

        for (int i = 2; i <= n; i++)
        {
            cin >> parent[i];
        }

        vector<vector<int>> graph(n + 1);
        for (int vertex = 2; vertex <= n; vertex++)
        {
            graph[parent[vertex]].push_back(vertex);
        }
        vector<int> height(n + 1, 0);

        auto dfs = [&]()
        {
            queue<int> q;
            height[1] = 1;
            q.push(1);

            while (!q.empty())
            {
                int frnt = q.front();
                q.pop();

                for (int weight : graph[frnt])
                {
                    height[weight] = height[frnt] + 1;
                    q.push(weight);
                }
            }
        };

        dfs();

        int minimumLeafHeight = INT_MAX;

        for (int v = 1; v <= n; v++)
        {
            if (graph[v].empty())
            {
                minimumLeafHeight = min(minimumLeafHeight, height[v]);
            }
        }

        vector<int> cnt(minimumLeafHeight + 1, 0);
        for (int v = 1; v <= n; v++)
        {
            if (height[v] <= minimumLeafHeight)
                cnt[height[v]]++;
        }

        vector<int> weight;
        for (int i = 1; i <= minimumLeafHeight; i++)
        {
            weight.push_back(cnt[i]);
        }

        sort(weight.begin(), weight.end());

        const int max_k = 1000 + 5;
        vector<bool> dp(max_k, 0);

        dp[0] = 1;

        int total = 0;
        int best = 0;

        int m = (int)weight.size();

        for (int i = 0; i < m; i++)
        {
            int w = weight[i];
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}