#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    int dist[105];
    vector<Edge> edge_list;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edge_list.push_back(Edge(u, v, w));
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[2] = 0;

    for (int i = 0; i < n - 1; i++)
    {

        for (auto edge : edge_list)
        {
            int u = edge.u;
            int v = edge.v;
            int w = edge.w;

            if (dist[u] != INT_MAX and dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dist[i] << endl;
    }

    return 0;
}