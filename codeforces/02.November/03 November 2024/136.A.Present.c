#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1], ans[n + 1];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        ans[arr[i]]=i;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}