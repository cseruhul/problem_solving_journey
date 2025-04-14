#include <stdio.h>

int main()
{
    int a[1000], n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*
    A[0] = 1
    A[1] = 2
    A[3] = 0

     */

    for (i = 0; i < n; i++)
    {
        if (a[i] <= 10)
            printf("A[%d] = %d\n", i, a[i]);
    }
    return 0;
}