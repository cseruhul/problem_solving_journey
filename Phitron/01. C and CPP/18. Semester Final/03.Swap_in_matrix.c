#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][m - 1];
                matrix[i][m - 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - 1][j];
                matrix[n - 1][j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}