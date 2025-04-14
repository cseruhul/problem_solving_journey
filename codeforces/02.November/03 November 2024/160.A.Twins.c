#include <stdio.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2) // comparing function
{
    int a = *(int *)num1;
    int b = *(int *)num2;
    if (a < b)
    {
        return 1;
    }
    else if (a > b)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int n, total = 0, sum = 0, coin = 0;
    scanf("%d", &n);
    int a[n + 2];

    for (int i = 0; i < n; i++)
    {
        int coin;
        scanf("%d", &coin);
        a[i] = coin;
        total += coin;
    }
    qsort(a, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", a[i]);
        coin++;
        sum += a[i];
        if (sum > total - sum)
        {
            break;
        }
    }

    printf("%d", coin);

    return 0;
}