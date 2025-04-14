#include <stdio.h>

int main()
{
    int n, i, j, count = 0;
    scanf("%d", &n);
    int a[n + 1];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    i = 0;
    j = 1;

    while (j < n)
    {
        if (a[j] < a[j - 1])
        {
            count = (j - i > count) ? j - i : count;
            i = j;
        }
        j++;
    }
    count = (j - i > count) ? j - i : count;
    printf("%d", count);

    return 0;
}