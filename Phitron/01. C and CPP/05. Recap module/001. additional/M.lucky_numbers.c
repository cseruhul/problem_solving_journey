#include <stdio.h>

int main()
{
    int a, b, flag = 0, isEmpty = 0, n, temp, i;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        flag = 0;
        n = i;
        while (n)
        {
            temp = n % 10;
            n = n / 10;
            if (temp != 4 && temp != 7)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            isEmpty = 1;
            printf("%d ", i);
        }
    }

    if (isEmpty == 0)
    {
        printf("-1");
    }

    return 0;
}