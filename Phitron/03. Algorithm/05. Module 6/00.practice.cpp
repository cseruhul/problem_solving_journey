#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int parent[105];

bool cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parnt = q.front();
        q.pop();

        cout << parnt << " ";

        for (auto child : adj_list[parnt])
        {
            if (visited[child] and parent[parnt] != child)
            {
                cycle = true;
            }

            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = parnt;
            }
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
        {
            bfs(i);
        }
    }

    if (cycle)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}