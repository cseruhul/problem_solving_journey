#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (auto child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
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

    int dest;
    cin >> dest;

    bfs(0);
    cout << endl;
    for (int i = 0; i < node; i++)
        cout << visited[i] << " ";

    cout << endl;
    cout << dest;
    cout << endl;
    if (!visited[dest])
        cout << "NO";
    else
        cout << "YES";

    return 0;
}