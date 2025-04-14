#include <stdio.h>

int main()
{
    int n, a[1000], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1;
        }
        if (a[i] < 0)
        {
            a[i] = 2;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}