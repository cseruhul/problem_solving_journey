#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_lsit[15];
int dist[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    dist[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int parent_node = parent.first;
        int parent_dist = parent.second;

        for (auto child : adj_lsit[parent_node])
        {
            int child_node = child.first;
            int child_dist = child.second;

            if (parent_dist + child_dist < dist[child_node])
            {
                dist[child_node] = parent_dist + child_dist;
                q.push({child_node, dist[child_node]});
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
        int u, v, w;
        cin >> u >> v >> w;

        adj_lsit[u].push_back({v, w});
        adj_lsit[v].push_back({u, w});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto child : adj_lsit[i])
            cout << "[" << child.first << " " << child.second << "] ";

        cout << endl;
    }

    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dijkstra(0);

    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
    return 0;
}