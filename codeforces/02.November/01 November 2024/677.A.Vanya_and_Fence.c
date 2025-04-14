#include <stdio.h>

int main()
{
    int n, h, width = 0, height;
    scanf("%d %d", &n, &h);

    while (n--)
    {
        scanf("%d", &height);
        if (height > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }

    printf("%d", width);

    return 0;
}