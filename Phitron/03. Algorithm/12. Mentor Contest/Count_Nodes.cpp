#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int nodes;

void dfs(int src)
{
    visited[src] = true;
    nodes++;

    for (auto child : adj_list[src])
        if (!visited[child])
            dfs(child);
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
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (auto item : adj_list[i])
        {
            if (!visited[item])
            {
                nodes = 0;
                dfs(item);
                ans.push_back(nodes);
            }
        }
    }

    sort(ans.begin(), ans.end());

    for (auto item : ans)
        cout << item << " ";

    return 0;
}