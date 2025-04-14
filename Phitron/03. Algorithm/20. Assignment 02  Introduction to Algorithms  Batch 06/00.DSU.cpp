#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
int max_size;

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }

    int leader = dsu_find(parent[node]);

    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        max_size = max(max_size, group_size[leader1]);
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] = group_size[leader1];
        max_size = max(max_size, group_size[leader2]);
    }
}

int main()
{
    int n, e;
    max_size = 1;
    cin >> n >> e;

    int component = n;

    dsu_init(n);

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        // cout << component << endl;
        // cout << u << " " << v << endl;
        
        int par_u = dsu_find(u);
        int par_v = dsu_find(v);

        if (par_u != par_v)
        {
            dsu_union(u, v);
            component--;
        }

        cout << component << " " << max_size << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " -> " << parent[i] << endl;
    // }

    return 0;
}