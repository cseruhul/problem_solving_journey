#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100];
unordered_map<int, bool> visited;
int number;

void dfs(int src)
{
    visited[src] = true;
    number++;

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
    vector<int> ans;
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
            number = 0;
            dfs(i);
            ans.push_back(number);
        }
    }

    sort(ans.begin(), ans.end());

    for (auto item : ans)
        cout << item << " ";

    return 0;
}