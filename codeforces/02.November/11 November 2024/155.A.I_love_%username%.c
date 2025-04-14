#include <stdio.h>

int main()
{
    int n, min, max, amazing = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            amazing++;
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            amazing++;
            max = arr[i];
        }
    }

    printf("%d", amazing);

    return 0;
}