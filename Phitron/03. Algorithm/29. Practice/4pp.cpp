#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];

void dfs(int src)
{
    visited[src] = true;

    for (auto dest : adj_list[src])
    {
        if (!visited[dest])
            dfs(dest);
    }
}

int main()
{
    int n, e, component = 0;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            component++;
            dfs(i);
        }
    }

    cout << component << endl;
    return 0;
}