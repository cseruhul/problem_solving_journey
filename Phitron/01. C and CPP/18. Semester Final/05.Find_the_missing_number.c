#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long long m, a, b, c, d;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        d = m / (a * b * c);

        if (a * b * c * d == m)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
