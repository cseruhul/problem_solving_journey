#include <stdio.h>

int main()
{
    long long t, x, y, sum = 0, a, b;
    scanf("%lld", &t);

    while (t)
    {
        scanf("%lld %lld", &x, &y);
        sum = 0;

        if (x > y)
        {
            a = y;
            b = x;
        }
        else
        {
            a = x;
            b = y;
        }
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }

        t--;
        printf("%lld\n", sum);
    }

    return 0;
}