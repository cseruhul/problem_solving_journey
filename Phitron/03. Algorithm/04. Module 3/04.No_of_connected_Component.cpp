#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void dfs(int src)
{
    visited[src] = true;
    for (auto item : adj_list[src])
    {
        if (visited[item] == false)
            dfs(item);
    }
}

int main()
{
    int n, e, ans = 0;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            ans++;
            dfs(i);
        }
    }

    cout << ans << endl;

    return 0;
}