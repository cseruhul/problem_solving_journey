#include <stdio.h>

int main()
{
    int n, minimum, maximum, temp;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    minimum = 0;
    maximum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maximum])
        {
            maximum = i;
        }

        if (arr[i] < arr[minimum])
        {
            minimum = i;
        }
    }

    temp = arr[minimum];
    arr[minimum] = arr[maximum];
    arr[maximum] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}