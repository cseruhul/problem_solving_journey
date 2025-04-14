#include <stdio.h>

int main()
{
    int w, flag = 0;
    scanf("%d", &w);

    for (int i = 1; i < w; i++)
    {
        if ((w - i) % 2 == 0 && i % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}