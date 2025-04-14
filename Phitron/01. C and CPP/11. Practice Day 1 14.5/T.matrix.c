#include <stdio.h>

int main()
{
    int n, primary_diagonal_sum = 0, secondary_diagonal_sum = 0;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += arr[i][j];
            }

            if (i + j == n - 1)
            {
                secondary_diagonal_sum += arr[i][j];
            }
        }
    }
    printf("%d", abs(primary_diagonal_sum - secondary_diagonal_sum));
    return 0;
}