#include <bits/stdc++.h>
using namespace std;

int counter;
vector<int> adj_list[105];
bool visited[105];

void dfs(int src)
{
    visited[src] = true;

    for (auto child : adj_list[src])
    {
        if (!visited[child])
        {
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

    counter = 0;
    int src;
    cin >> src;

    dfs(src);

    cout << counter << endl;

    return 0;
}