#include <stdio.h>

int main()
{
    int a, b, year_count = 0;
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        year_count++;
    }

    printf("%d", year_count);

    return 0;
}