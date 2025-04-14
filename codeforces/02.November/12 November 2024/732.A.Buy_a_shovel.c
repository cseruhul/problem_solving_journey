#include <stdio.h>

int main()
{
    int k, r, i = 1;
    scanf("%d %d", &k, &r);

    while (1)
    {
        if (k * i % 10 == r || k * i % 10 == 0)
        {
            break;
        }
        i++;
    }

    printf("%d", i);

    return 0;
}