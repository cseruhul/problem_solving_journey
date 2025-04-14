#include <stdio.h>

int main()
{
    int n, number;
    scanf("%d", &n);
    int maximum = 0, minimum = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        maximum = (arr[i] > arr[maximum]) ? i : maximum;
        minimum = (arr[i] <= arr[minimum]) ? i : minimum;
    }
    // printf("%d %d\n", maximum, minimum);
    if (maximum < minimum)
    {

        printf("%d", (maximum + (n - 1) - minimum));
    }
    else
    {

        printf("%d", (maximum + (n - 1) - minimum) - 1);
    }

    return 0;
}