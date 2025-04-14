#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[105];
int dist[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    dist[src] = 0;

    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();

        int parent_node = parent.first;
        int parent_cost = parent.second;

        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_cost = child.second;

            if (parent_cost + child_cost < dist[child_node])
            {
                dist[child_node] = parent_cost + child_cost;
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

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";

    return 0;
}