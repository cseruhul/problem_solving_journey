#include <stdio.h>

int main()
{
    int x, i, flag = 0;
    scanf("%d", &x);

    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}