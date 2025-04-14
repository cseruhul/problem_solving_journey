#include <stdio.h>

int main()
{
    int n, i = 5, steps = 0;
    scanf("%d", &n);

    while (n && i)
    {
        if (n / i == 0)
        {
            i--;
        }
        else
        {
            steps += n / i;
            n = n % i;
        }
    }

    printf("%d", steps);

    return 0;
}