#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;

    Edge(int a, int b, int c)
    {
        this->u = a;
        this->v = b;
        this->w = c;
    }
};

vector<Edge> edge_list;
vector<long long> dist;
int n, e, q, s, d;
bool cycle = false;

void can_go_again(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto item : edge_list)
        {
            int u = item.u;
            int v = item.v;
            int w = item.w;

            if (dist[u] != LLONG_MAX and dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (auto item : edge_list)
    {
        int u = item.u;
        int v = item.v;
        int w = item.w;

        if (dist[u] != LLONG_MAX and dist[u] + w < dist[v])
        {
            cycle = true;
            break;
        }
    }
}

int main()
{

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        edge_list.push_back(Edge(u, v, w));
    }

    dist.resize(n + 1, LLONG_MAX);

    cin >> s;

    dist[s] = 0;

    can_go_again(n);

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        cin >> q;

        while (q--)
        {
            cin >> d;

            if (dist[d] == LLONG_MAX)
                cout << "Not Possible";
            else
                cout << dist[d] << " ";

            cout << endl;
        }
    }

    return 0;
}