#include <stdio.h>

int main()
{
    long long k, n, w, total_cost = 0;
    scanf("%lld %lld %lld", &k, &n, &w);

    for (int i = 1; i <= w; i++)
    {
        total_cost += i * k;
    }
    if (total_cost > n)
    {
        printf("%lld", total_cost - n);
    }
    else
    {
        printf("0");
    }

    return 0;
}