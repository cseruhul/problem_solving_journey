#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
vector<int> ans;
unordered_set<int> groups;

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        group_size[i] = 1;
    }
}

int dsu_find(int n)
{
    if (parent[n] == n)
        return n;

    int leader = dsu_find(parent[n]);
    parent[n] = leader;

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
    int n, e;
    cin >> n >> e;

    dsu_init(n);

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        int node1 = dsu_find(u);
        int node2 = dsu_find(v);

        if (node1 != node2)
        {
            dsu_union(node1, node2);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        groups.insert(dsu_find(i));
    }

    for (auto item : groups)
        ans.push_back(item);

    int node_group = ans.size();

    cout << node_group - 1 << endl;
    for (int i = 1; i < node_group; i++)
    {
        cout << ans[i - 1] << " " << ans[i] << endl;
    }
    return 0;
}