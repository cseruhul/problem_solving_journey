#include <stdio.h>

int main()
{
    int r, c, n, m;
    scanf("%d %d", &n, &m);

    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= m; c++)
        {
            if ((r % 2 == 1) || ((r / 2) % 2 == 1 && c == m) || ((r / 2) % 2 == 0 && c == 1))
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}