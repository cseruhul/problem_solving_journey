#include <stdio.h>
int find_max(int *arr, int i, int n)
{
    if (i == n-1)
    {
        return arr[i];
    }
    int number = find_max(arr, i + 1, n);
    return (number > arr[i]) ? number : arr[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = find_max(arr, 0, n);
    printf("%d", ans);
    return 0;
}