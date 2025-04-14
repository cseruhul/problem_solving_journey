#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    bool adj_matrix[n + 5][n + 5];

    memset(adj_matrix, false, sizeof(adj_matrix));

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
        int a, b;
        cin >> a >> b;

        if (adj_matrix[a][b] == true or a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
