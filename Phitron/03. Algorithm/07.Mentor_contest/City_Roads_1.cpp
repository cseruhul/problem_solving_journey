#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n + 5];

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int q, node;
    cin >> q;

    while (q--)
    {
        cin >> node;

        if (adj_list[node].size() == 0)
        {
            cout << "No connections";
        }
        else
        {
            sort(adj_list[node].begin(), adj_list[node].end());
            for (auto vertex : adj_list[node])
                cout << vertex << " ";
        }
        cout << endl;
    }

    return 0;
}