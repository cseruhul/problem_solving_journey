#include <stdio.h>

int find_min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}
int main()
{
    int n, k, l, c, d, p, nl, np, drink, lime, salt;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    drink = k * l / nl;
    lime = c * d;
    salt = p / np;

    printf("%d", find_min(drink, lime, salt) / n);

    return 0;
}