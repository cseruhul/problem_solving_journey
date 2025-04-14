#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int component;

void dfs(int src)
{
    visited[src] = true;
    component++;
    for (auto dest : adj_list[src])
    {
        if (!visited[dest])
            dfs(dest);
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
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            component = 0;
            dfs(i);

            ans.push_back(component);
        }
    }

    sort(ans.begin(), ans.end());

    for (auto item : ans)
        cout << item << " ";

    return 0;
}