#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

void dfs(int src)
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
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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

    // for (int i = 0; i < v; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto item : adj_list[i])
    //     {
    //         cout << item << " ";
    //     }
    //     cout << endl;
    // }

    int q, src, dest;

    cin >> q;

    while (q--)
    {
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        cin >> src >> dest;

        dfs(src);

        cout << level[dest] << endl;
    }

    return 0;
}