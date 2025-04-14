#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100];
unordered_map<int, bool> visited;

void dfs(int src)
{
    visited[src] = true;

    for (auto child : adj_list[src])
    {
        if (!visited[child])
            dfs(child);
    }
}

int main()
{
    int n, e, ans = 0;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans++;
            dfs(i);
        }
    }

    cout << ans << endl;

    return 0;
}