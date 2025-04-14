#include <stdio.h>

int main()
{
    long long t = 0, n, fact = 1;
    scanf("%lld", &t);
// printf("%lld", t);
    while (t)
    {
        scanf("%lld", &n);
        fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
        t--;
    }

    return 0;
}