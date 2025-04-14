#include <stdio.h>

int main()
{
    int n = 0, i, j, k;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ", j);
        }
        for (k = 1; k <= n - i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}