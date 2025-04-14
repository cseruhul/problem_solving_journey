#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
int max_comp_size;

void dsu_init(int n)
{
    for (int i = 0; i <= n; i++)
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
    int parent_node1 = dsu_find(node1);
    int parent_node2 = dsu_find(node2);

    if (group_size[parent_node1] >= group_size[parent_node2])
    {
        parent[parent_node2] = parent_node1;
        group_size[parent_node1] += group_size[parent_node2];
        max_comp_size = max(max_comp_size, group_size[parent_node1]);
    }
    else
    {
        parent[parent_node1] = parent_node2;
        group_size[parent_node2] += group_size[parent_node1];
        max_comp_size = max(max_comp_size, group_size[parent_node2]);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    dsu_init(n);

    int component = n;
    max_comp_size = 0;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        int par_a = dsu_find(a);
        int par_b = dsu_find(b);

        if (par_a != par_b)
        {
            component--;
            dsu_union(a, b);
        }

        cout << component << " " << max_comp_size << endl;
    }

    return 0;
}