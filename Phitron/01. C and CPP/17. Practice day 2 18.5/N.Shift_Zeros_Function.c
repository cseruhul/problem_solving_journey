#include <stdio.h>

void shift_zeros(int *ar, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ar[j] == 0)
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
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

    shift_zeros(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}