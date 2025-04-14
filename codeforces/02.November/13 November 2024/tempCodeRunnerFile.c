#include <stdio.h>

int main()
{
    int t, a, b, count = 0;
    scanf("%d", &t);

    while (t--)
    {
        count = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            if ((a - b) % 10 == 0)
            {
                count = (a - b) / 10;
            }
            else
            {
                count = (a - b) / 10 + 1;
            }
        }
        else
        {
            if ((a - b) % 10 == 0)
            {
                count = (b - a) / 10;
            }
            else
            {
                count = (b - a) / 10 + 1;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}