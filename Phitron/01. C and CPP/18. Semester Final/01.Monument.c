#include <stdio.h>
void print_monument(int i, int n)
{
    if (i == n)
    {
        printf("%d ", i);
        return;
    }
    printf("%d ", i);
    print_monument(i + 1, n);
    printf("%d ", i);
}

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        print_monument(1, n);
        // for (int i = 1; i <= n; i++)
        // {
        //     printf("%d ", i);
        // }

        // for (int i = n - 1; i >= 1; i--)
        // {
        //     printf("%d ", i);
        // }
        printf("\n");
    }

    return 0;
}