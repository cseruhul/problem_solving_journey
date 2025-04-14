#include <stdio.h>

int main()
{
    double n, hundred = 100, total = 0, percent;
    scanf("%lf", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &percent);
        total += percent / 100.00;
    }

    printf("%.12lf", total / n * hundred);
    return 0;
}