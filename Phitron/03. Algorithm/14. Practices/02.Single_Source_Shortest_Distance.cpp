#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int level[105];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = parent + 1;
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    bfs(0);

    int dest;
    cin >> dest;

    cout << level[dest];

    return 0;
}