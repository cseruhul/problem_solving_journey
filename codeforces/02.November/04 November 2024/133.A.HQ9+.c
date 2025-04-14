#include <stdio.h>

int main()
{
    int flag = 0;
    char p[102];
    scanf("%s", p);

    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
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