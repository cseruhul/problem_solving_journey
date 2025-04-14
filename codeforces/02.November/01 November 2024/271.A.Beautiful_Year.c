#include <stdio.h>

int main()
{
    int y, unit, tenth, hundred, thousand;
    scanf("%d", &y);

    while (1)
    {
        y++;
        unit = y % 10;
        tenth = (y / 10) % 10;
        hundred = (y / 100) % 10;
        thousand = (y / 1000) % 10;

        if (thousand != hundred && thousand != tenth && thousand != unit && hundred != tenth && hundred != unit && tenth != unit)
        {
            break;
        }
    }
    printf("%d%d%d%d", thousand, hundred, tenth, unit);

    return 0;
}