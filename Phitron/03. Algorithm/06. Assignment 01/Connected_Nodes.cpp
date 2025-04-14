#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        // cout << u << " " << v << endl;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto item : adj_list[i])
    //         cout << item << " ";

    //     cout << endl;
    // }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        vector<int> ans;
        ans = adj_list[x];

        if (ans.size() == 0)
        {
            cout << "-1" << endl;
            continue;
        }

        sort(ans.begin(), ans.end(), greater<int>());

        for (auto item : ans)
            cout << item << " ";

        cout << endl;
    }

    return 0;
}
