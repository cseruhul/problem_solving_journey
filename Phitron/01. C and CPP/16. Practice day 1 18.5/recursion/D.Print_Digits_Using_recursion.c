#include <stdio.h>
void print_digit(int n)
{
    if (n == 0)
        return;
    print_digit(n / 10);
    printf("%d ", n % 10);
}
int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        print_digit(n);
        printf("\n");
    }

    return 0;
}