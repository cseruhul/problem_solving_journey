#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100];
unordered_map<int, bool> visited;

void dfs(int src)
{
    visited[src] = true;

    for (auto child : adj_list[src])
    {
        if (visited[child] == false)
            dfs(child);
    }
}

int main()
{
    int n, e, src, ans = 0;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    cin >> src;
    dfs(src);
    // for (auto item : visited)
    // {
    //     cout << item.first << " " << item.second << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto item : adj_list[i])
    //         cout << item << " ";
    //     cout << endl;
    // }
    
    cout << visited.size() << endl;
    return 0;
}