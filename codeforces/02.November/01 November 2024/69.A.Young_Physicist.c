#include <stdio.h>

int main()
{
    int n, x1, y1, z1, x = 0, y = 0, z = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &x1, &y1, &z1);
        x += x1;
        y += y1;
        z += z1;
    }

    if (x == 0 && y == 0 && z == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}