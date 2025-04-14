#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool adj_matrix[1005][1005];
    int n, e;

    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj_matrix[i][j] = true;
            else
                adj_matrix[i][j] = false;
        }
    }

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_matrix[u][v] = true;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (adj_matrix[u][v])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}