#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            else
            {
                mat[i][j] = INT_MAX;
            }
        }
    }

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        mat[u][v] = w;
    }

    // Floyed Warshall Algorithm Code

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k] != INT_MAX and mat[k][j] != INT_MAX and (mat[i][k] + mat[k][j] < mat[i][j]))
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == INT_MAX)
                cout << "INF" << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}