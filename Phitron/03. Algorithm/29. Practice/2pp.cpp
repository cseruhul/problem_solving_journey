#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> adj_list[105];
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int q;
    cin >> q;
    cout << adj_list[q].size();
    return 0;
}