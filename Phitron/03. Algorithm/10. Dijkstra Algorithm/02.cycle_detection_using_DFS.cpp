#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int parent[105];

bool cycle;

void dfs(int src)
{
    visited[src] = true;

    for (auto child : adj_list[src])
    {
        if (visited[child] and parent[src] != child)
            cycle = true;

        if (!visited[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));

    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    if (cycle)
        cout << "\nCycle Detected" << endl;
    else
        cout << "\nNo Cycle Detected" << endl;
    return 0;
}