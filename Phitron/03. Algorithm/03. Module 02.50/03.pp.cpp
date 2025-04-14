#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
vector<bool> visited[1005];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int v;
    cin >> v;

    cout << adj_list[v].size();

    return 0;
}