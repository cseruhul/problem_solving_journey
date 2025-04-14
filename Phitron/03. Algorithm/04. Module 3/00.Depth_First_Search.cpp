#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void dfs(int source)
{
    cout << source << " ";
    visited[source] = true;

    for (auto child : adj_list[source])
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

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> ";

    //     for (auto item : adj_list[i])
    //     {
    //         cout << item << " ";
    //     }

    //     cout << endl;
    // }

    dfs(0);

    return 0;
}