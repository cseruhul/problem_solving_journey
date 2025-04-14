#include <stdio.h>

int main()
{
    int n, m, flag = 1;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO");
        return 0;
    }

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
            if (i == j || i + j == m - 1)
            {
                if (matrix[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }


    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}