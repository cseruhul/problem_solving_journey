#include <stdio.h>

int main()
{
    int n, zeros = 0, ones = 0, num;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);
        if (num == 0)
            zeros++;
        else
            ones++;
    }

    printf("%d %d", zeros, ones);

    return 0;
}