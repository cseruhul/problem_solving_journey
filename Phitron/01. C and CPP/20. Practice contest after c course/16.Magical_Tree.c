#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size[22] = {0}, n, num = 6;
    scanf("%d", &n);

    for (int i = 1; i <= 22; i += 2)
    {
        size[i] = num;
        num++;
    }

    // for (int i = 1; i <= 22; i += 2)
    // {
    //     printf("%d = %d\n", i, size[i]);
    // }
    int m = size[n];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
