#include <stdio.h>
#include <math.h>

int isComposite(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {

        // printf("[%d]%d [%d]%d\n", i, isComposite(i), n - i, isComposite(n - i));
        // // printf("%d\n", isComposite(i));
        if (isComposite(i) && isComposite(n - i))
        {
            printf("%d %d\n", i, n - i);
            break;
        }
    }

    return 0;
}