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
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {
            if (!visited[child])
            {
                visited[child] = true;
                level[child] = level[par] + 1;

                q.push(child);
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

    int q;
    cin >> q;

    while (q--)
    {
        int src, dist;
        cin >> src >> dist;

        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        bfs(src);

        cout << level[dist] << endl;
    }

    return 0;
}