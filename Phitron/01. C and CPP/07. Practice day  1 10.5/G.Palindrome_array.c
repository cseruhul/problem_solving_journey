#include <stdio.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0, j = n - 1; i <= n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}