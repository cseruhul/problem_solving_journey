#include <stdio.h>

int main()
{
    long long t, a, b;
    scanf("%lld", &t);
    // printf("%d\n", t);
    while (t--)
    {
        scanf("%lld %lld", &a, &b);
        // printf("%lld %lld\n", a, b);

        if (a % b == 0)
        {

            printf("0\n");
        }
        else if (a < b)
        {
            printf("%lld\n", (b - a));
        }
        else if (a > b)
        {
            printf("%lld\n", ((((a / b) + 1) * b) - a));
        }

        // count = 0;
        // scanf("%d %d", &a, &b);
        // while (1)
        // {
        //     if (a % b == 0)
        //     {
        //         break;
        //     }
        //     count++;
        //     a++;
        // }

        // printf("%d\n", count);
    }

    return 0;
}