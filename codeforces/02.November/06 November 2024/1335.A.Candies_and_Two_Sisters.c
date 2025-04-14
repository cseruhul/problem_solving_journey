#include <stdio.h>

int main()
{
    int t;
    long long candies;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld", &candies);
        if (candies % 2 == 0)
        {
            printf("%lld\n", (candies / 2) - 1);
        }
        else
        {

            printf("%lld\n", candies / 2);
        }
    }

    return 0;
}