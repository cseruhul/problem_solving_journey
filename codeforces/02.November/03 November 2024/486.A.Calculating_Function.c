#include <stdio.h>
long long f(long long n)
{

    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return (-1) * (n + 1) / 2;
    }
}

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld", f(n));
    return 0;
}