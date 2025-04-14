#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[105];
int dist[105];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    dist[src] = 0;

    while (!pq.empty())
    {
        auto parent = pq.top();
        pq.pop();

        int parent_node = parent.second;
        int parent_dist = parent.first;

        for (auto child : adj_list[parent_node])
        {
            int child_node = child.second;
            int child_dist = child.first;

            if (parent_dist + child_dist < dist[child_node])
            {
                dist[child_node] = parent_dist + child_dist;
                pq.push({dist[child_node], child_node});
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

        adj_list[u].push_back({w, v});
        adj_list[v].push_back({w, u});
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}