#include <stdio.h>

int main()
{
    int k, l, m, n, d, damaged_dragon = 0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damaged_dragon++;
        }
    }

    printf("%d", damaged_dragon);

    return 0;
}