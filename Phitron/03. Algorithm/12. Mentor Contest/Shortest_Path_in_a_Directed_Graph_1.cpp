#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto child : adj_list[parent])
        {
            if (!visited[child])
            {
                visited[child] = true;
                level[child] = level[parent] + 1;
                q.push(child);
            }
        }
    }
}

int main()
{
    int v, e, Q;
    cin >> v >> e;

    while (e--)
    {
        int v1, v2;
        cin >> v1 >> v2;

        adj_list[v1].push_back(v2);
    }

    cin >> Q;

    while (Q--)
    {
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        int src, dest;
        cin >> src >> dest;

        bfs(src);

        cout << level[dest] << endl;
    }

    return 0;
}