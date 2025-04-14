#include <stdio.h>

long long sum(long long a, long long b)
{
    return a + b;
}

int main()
{
    long long x, y;
    scanf("%lld %lld", &x, &y);
    printf("%lld", sum(x, y));
    return 0;
}
