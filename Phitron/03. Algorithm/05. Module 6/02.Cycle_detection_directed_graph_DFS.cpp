#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
bool path[105];

bool cycle;
int no_of_cycle;

void dfs(int src)
{
    visited[src] = true;
    path[src] = true;

    // cout << src << " ";

    for (auto child : adj_list[src])
    {
        if (visited[child] and path[src])
            cycle = true;

        if (!visited[child])
        {
            dfs(child);
        }
    }

    path[src] = false;
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
    }

    memset(visited, false, sizeof(visited));
    memset(path, false, sizeof(path));
    no_of_cycle = 0;

    for (int i = 0; i < n; i++)
    {
        cycle = false;
        if (!visited[i])
            dfs(i);

        if (cycle == true)
            no_of_cycle++;
    }

    cout << no_of_cycle << endl;

    if (cycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Detected" << endl;

    return 0;
}