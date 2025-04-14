#include <stdio.h>

int main()
{
    int a[100000];
    int n, x, i, flag = -1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = i;
            break;
        }
    }

    if (flag == -1)
        printf("-1");
    else
        printf("%d", flag);

    return 0;
}