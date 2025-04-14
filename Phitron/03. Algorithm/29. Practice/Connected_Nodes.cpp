#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (adj_list[x].size() == 0)
            cout << -1;
        else
        {
            sort(adj_list[x].begin(), adj_list[x].end(), greater<int>());
            for (auto item : adj_list[x])
                cout << item << " ";
        }

        cout << endl;
    }

    return 0;
}