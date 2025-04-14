#include <stdio.h>

int main()
{
    int a, b, diff_socks_days = 0, same_socks_day = 0;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        diff_socks_days = a;
        same_socks_day = (b - a) / 2;
    }
    else
    {
        diff_socks_days = b;
        same_socks_day = (a - b) / 2;
    }

    printf("%d %d", diff_socks_days, same_socks_day);

    return 0;
}