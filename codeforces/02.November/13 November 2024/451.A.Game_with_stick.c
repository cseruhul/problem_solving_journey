#include <stdio.h>

int main()
{
    int n, m, status = 1;
    scanf("%d %d", &n, &m);

    while (1)
    {
        if (status == 1)
        {
            status = 0;
        }
        else
        {
            status = 1;
        }
        n--;
        m--;

        if (n == 0 || m == 0)
        {
            break;
        }
    }

    if (status == 0)
    {
        printf("Akshat");
    }
    else
    {
        printf("Malvika");
    }

    return 0;
}