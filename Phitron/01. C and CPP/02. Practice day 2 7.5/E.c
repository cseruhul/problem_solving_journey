#include <stdio.h>

int main()
{
    int n, i, a[1000], lowest, flag = -1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    lowest = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] < lowest)
            lowest = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] == lowest)
        {
            flag = i;
            break;
        }
    }

    printf("%d %d", a[flag], flag + 1);

    return 0;
}