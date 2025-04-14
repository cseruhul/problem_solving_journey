#include <stdio.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2)
{
    int a = *(int *)num1;
    int b = *(int *)num2;
    if (a > b)
    {
        return 1;
    }
    else if (a < b)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int n, m, pieces = 10010;
    scanf("%d %d", &n, &m);
    int arr[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, m, sizeof(int), compare);

    int i = 0, j = n - 1;
    do
    {
        pieces = (pieces < (arr[j] - arr[i])) ? pieces : (arr[j] - arr[i]);
        i++;
        j++;
    } while (j < m);

    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("%d", pieces);
    return 0;
}