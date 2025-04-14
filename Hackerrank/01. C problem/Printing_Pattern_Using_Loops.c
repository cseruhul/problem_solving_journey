#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val = n;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", val--);
        }
        ++val;
        for (int k = 1; k <= n - i; k++)
        {
            printf("%d ", val);
        }

        for (int l = 1; l <= n - i; l++)
        {
            printf("%d ", val);
        }
        val++;
        for (int jj = 1; jj < i; jj++)
        {
            printf("%d ", val++);
        }

        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        int val = n;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ", val--);
        }
        val++;
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", val);
        }

        for (int l = 1; l < i; l++)
        {
            printf("%d ", val);
        }

        for (int l = 1; l <= n - i; l++)
        {
            printf("%d ", val++);
        }

        printf("\n");
    }

    return 0;
}