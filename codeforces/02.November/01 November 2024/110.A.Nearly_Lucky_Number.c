#include <stdio.h>

int main()
{
    long long n, luckey_digit = 0;
    scanf("%lld", &n);

    while (n)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            luckey_digit++;
        }
        n = n / 10;
    }

    if (luckey_digit == 4 || luckey_digit == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}