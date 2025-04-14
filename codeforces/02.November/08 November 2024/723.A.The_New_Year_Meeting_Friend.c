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
    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    qsort(x, 3, sizeof(int), compare);
    // printf("%d %d %d", x[0], x[1], x[2]);

    printf("%d", x[2] - x[0]);

    return 0;
}