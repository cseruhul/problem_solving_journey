#include <stdio.h>

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    int arr[n];
    int freq[100005] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] = 1;
    }

    for (int i = 0; i < 100002; i++)
    {
        if (freq[i] != 0)
        {
            ans++;
        }
    }

    printf("%d", ans);

    return 0;
}