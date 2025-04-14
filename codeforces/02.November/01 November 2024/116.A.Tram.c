#include <stdio.h>

int main()
{
    int n, a, b, total = 0, capacity = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        total = total - a + b;
        capacity = (total > capacity) ? total : capacity;
    }

    printf("%d", capacity);

    return 0;
}