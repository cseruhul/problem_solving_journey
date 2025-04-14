#include <stdio.h>

void max_min(int *arr, int n)
{
    int min = 100002, max = -1;
    for (int i = 0; i < n; i++)
    {
        min = (arr[i] < min) ? arr[i] : min;
        max = (arr[i] > max) ? arr[i] : max;
    }

    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, n);

    return 0;
}