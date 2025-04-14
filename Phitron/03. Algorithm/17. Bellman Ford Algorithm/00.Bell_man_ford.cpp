#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;

    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int n, e;
bool negative_cycle;

vector<Edge> edge_list;
vector<int> dist_vector(1005);

void bellman_ford()
{
    negative_cycle = false;
    for (int i = 0; i < n; i++)
    {
        dist_vector[i] = INT_MAX;
    }

    dist_vector[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (Edge edge : edge_list)
        {
            int u, v, c;
            u = edge.u;
            v = edge.v;
            c = edge.c;

            if (dist_vector[u] != INT_MAX and dist_vector[u] + c < dist_vector[v])
            {
                dist_vector[v] = dist_vector[u] + c;
            }
        }
    }

    for (Edge edge : edge_list)
    {
        int u, v, c;
        u = edge.u;
        v = edge.v;
        c = edge.c;

        if (dist_vector[u] != INT_MAX and dist_vector[u] + c < dist_vector[v])
        {
            negative_cycle = true;
        }
    }

    if (negative_cycle)
        cout << "Negative cycle Detected." << endl;
    else
    {
        for (int i = 0; i < n; i++)
            cout << dist_vector[i] << " ";
    }
}

int main()
{

    cin >> n >> e;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;

        edge_list.push_back(Edge(u, v, c));
    }

    for (auto item : edge_list)
    {
        cout << item.u << " " << item.v << " " << item.c << endl;
    }

    bellman_ford();

    return 0;
}