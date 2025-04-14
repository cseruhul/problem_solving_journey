#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];

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
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int v1, v2;
        cin >> v1 >> v2;

        adj_list[v1].push_back(v2);
        adj_list[v2].push_back(v1);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, dest;
    cin >> src;
    cin >> dest;

    bfs(src);

    // for (int i = 0; i < v; i++)
    // {
    //     cout << i << " Parent " << parent[i] << endl;
    // }

    int vertex = dest;
    vector<int> path;

    while (vertex != -1)
    {
        path.push_back(vertex);
        vertex = parent[vertex];
    }

    reverse(path.begin(), path.end());

    for (int item : path)
        cout << item << " ";

    return 0;
}