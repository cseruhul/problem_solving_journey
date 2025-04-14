#include <bits/stdc++.h>
using namespace std;

long long adj_matrix[105][105];

void mat_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj_matrix[i][j] = 0;
            else
                adj_matrix[i][j] = LLONG_MAX;
        }
    }
}

void floyd_warshal(int n)
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_matrix[i][k] != LLONG_MAX and adj_matrix[k][j] != LLONG_MAX and adj_matrix[i][k] + adj_matrix[k][j] < adj_matrix[i][j])
                {
                    adj_matrix[i][j] = adj_matrix[i][k] + adj_matrix[k][j];
                }
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    mat_init(n);

    while (e--)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;

        adj_matrix[u][v] = min(adj_matrix[u][v], w);
    }

    floyd_warshal(n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (adj_matrix[i][j] == INT_MAX)
    //             cout << "INF" << " ";
    //         else
    //             cout << adj_matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (adj_matrix[x][y] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << adj_matrix[x][y] << endl;
    }

    return 0;
}