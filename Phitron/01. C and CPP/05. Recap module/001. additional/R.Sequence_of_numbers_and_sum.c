#include <stdio.h>

int main()
{
    int m, n, sum = 0, i, j;

    while (1)
    {
        sum = 0;
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }

        if (m > n)
        {
            i = n;
            j = m;
        }
        else
        {
            i = m;
            j = n;
        }

        for (i; i <= j; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}