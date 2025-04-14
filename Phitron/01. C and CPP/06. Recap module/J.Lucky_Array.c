#include <stdio.h>

int main()
{
    int n, freq = 0, minimum;
    scanf("%d", &n);
    int arr[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    minimum = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    // printf("min = %d\n", minimum);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimum)
        {
            freq++;
        }
    }
    // printf("frequency = %d\n", freq);
    if (freq % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}