#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, score_count = 0, flag = 1;
    scanf("%d %d", &n, &m);
    int grid[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            flag = 1;

            if (i > 0 && grid[i][j] <= grid[i - 1][j])
            {
                flag = 0;
            }

            if (i < n - 1 && grid[i][j] <= grid[i + 1][j])
            {
                flag = 0;
            }

            if (j > 0 && grid[i][j] <= grid[i][j - 1])
            {
                flag = 0;
            }

            if (j < n - 1 && grid[i][j] <= grid[i][j + 1])
            {
                flag = 0;
            }

            if (flag == 1)
            {
                score_count++;
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }

    printf("%d", score_count);

    return 0;
}
