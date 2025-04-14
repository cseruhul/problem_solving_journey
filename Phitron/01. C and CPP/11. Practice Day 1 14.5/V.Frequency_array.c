#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &n, &m);

    int arr[n + 2];
    int freq[100002] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}