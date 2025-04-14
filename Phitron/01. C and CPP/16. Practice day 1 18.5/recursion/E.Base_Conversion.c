#include <stdio.h>
void baseConversion(int n)
{
    if (n == 0)
        return;
    baseConversion(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        baseConversion(n);
        printf("\n");
    }

    return 0;
}