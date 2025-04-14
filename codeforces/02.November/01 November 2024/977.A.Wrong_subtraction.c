#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
    }

    printf("%d", n);

    return 0;
}