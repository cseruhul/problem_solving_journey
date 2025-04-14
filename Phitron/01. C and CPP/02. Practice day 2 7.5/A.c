#include <stdio.h>

int main()
{
    int a[100000];
    long long n, sum = 0;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (sum >= 0)
    {
        printf("%lld", sum);
    }
    else
    {
        sum = sum * (-1);
        printf("%lld", sum);
    }
    return 0;
}