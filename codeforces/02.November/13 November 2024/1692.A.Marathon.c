#include <stdio.h>

int main()
{
    int t, a, b, count;
    scanf("%d", &t);

    while (t--)
    {
        count = 0;
        scanf("%d", &a);

        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &b);
            if (b > a)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}