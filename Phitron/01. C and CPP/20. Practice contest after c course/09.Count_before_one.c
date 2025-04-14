#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long count_before_one(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return count;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, n);

    printf("%d", result);

    return 0;
}
