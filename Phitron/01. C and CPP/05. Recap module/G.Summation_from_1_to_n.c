#include <stdio.h>

int main()
{
    long long n, sum = 0;
    scanf("%lld", &n);

    // for (long long i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    sum = n * (n + 1) / 2;

    printf("%lld", sum);

    return 0;
}