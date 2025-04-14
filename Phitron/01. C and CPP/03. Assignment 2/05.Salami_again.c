#include <stdio.h>

int main()
{
    int n, arr[100000], maximum_salami;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maximum_salami = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum_salami)
        {
            maximum_salami = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", maximum_salami - arr[i]);
    }

    return 0;
}