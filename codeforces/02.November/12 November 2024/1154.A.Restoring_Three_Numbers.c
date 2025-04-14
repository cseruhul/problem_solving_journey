#include <stdio.h>

int main()
{
    int x[4], max = 0;

    scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);

    for (int i = 0; i < 4; i++)
    {
        if (x[max] < x[i])
        {
            max = i;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (max != i)
        {
            printf("%d ", x[max] - x[i]);
        }
    }

    // printf("%d %d %d %d", x[0], x[1], x[2], x[3]);

    return 0;
}