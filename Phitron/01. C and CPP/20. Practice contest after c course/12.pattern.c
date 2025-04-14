#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("Here.");
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // printf("\n");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    for (int i = n-1; i >0; i--)
    {
        // printf("Here.");
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // printf("\n");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
