#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == node)
        return node;

    int leader = dsu_find(parent[node]);
    parent[node] = leader;

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
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    int n, e, ans = 0;
    cin >> n >> e;

    dsu_init(n);

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        int parent_u = dsu_find(u);
        int parent_v = dsu_find(v);

        if (parent_u != parent_v)
        {
            dsu_union(parent_u, parent_v);
        }
        else
            ans++;
    }
    cout << ans;

    return 0;
}