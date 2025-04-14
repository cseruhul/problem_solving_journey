#include <stdio.h>

long long log_two(long long n)
{
    if (n <= 1)
    {
        // printf("%d\n", n);

        return 0;
    }

    return 1 + log_two(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    // printf("%d\n", n);

    long long ans = log_two(n);

    printf("%lld", ans);

    return 0;
}