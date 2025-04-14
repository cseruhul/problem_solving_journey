#include <stdio.h>

int main()
{
    int n, group, one = 0, two = 0, three = 0, four = 0, count = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &group);

        if (group == 1)
            one++;
        else if (group == 2)
            two++;
        else if (group == 3)
            three++;
        else
            four++;
    }
    count += four;
    four = 0;

    count += two / 2;
    two = two % 2;

    if (one > three)
    {
        count += three;
        one -= three;
        three = 0;
        count += one / 4;
        one = one % 4;

        if (((one + two * 2) <= 4) && ((one + two * 2) > 0))
        {
            count++;
            one = 0;
            two = 0;
        }
        else if (one == 3 && two == 1)
        {
            count += 2;
            one = 0;
            two = 0;
        }
    }
    else if (three >= one)
    {
        count += one;
        three -= one;
        one = 0;
        count += three + two;
    }

    printf("%d", count);

    return 0;
}