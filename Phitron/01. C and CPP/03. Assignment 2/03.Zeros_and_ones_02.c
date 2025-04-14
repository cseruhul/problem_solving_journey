#include <stdio.h>

int main()
{
    int arr[100000], n, x, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    if (arr[x - 1] == 0)
    {
        arr[x - 1] = 1;
    }
    else
    {
        arr[x - 1] = 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}