#include <stdio.h>

int isLucky(int number)
{
    int flag = 1;
    while (number)
    {
        if (number % 10 != 4 && number % 10 != 7)
        {
            flag = 0;
            break;
        }
        number = number / 10;
    }

    return flag;
}

int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = isLucky(i);
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}