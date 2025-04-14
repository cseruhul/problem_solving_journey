#include <stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a + b == c)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }

    return 0;
}