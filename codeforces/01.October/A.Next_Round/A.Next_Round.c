#include <stdio.h>

int main()
{
    int n, k, answer = 0;
    scanf("%d %d", &n, &k);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[k - 1] == 0 && arr[i] > arr[k - 1])
        {
            answer++;
        }
        else if (arr[k - 1] > 0 && arr[i] >= arr[k - 1])
        {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}