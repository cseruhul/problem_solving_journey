#include <stdio.h>

int main()
{
    char ch[202];
    scanf("%s", ch);

    int i = 0;

    while (ch[i] != '\0')
    {
        if (ch[i] == '.')
        {
            printf("0");
            i++;
        }
        else if (ch[i] == '-' && ch[i + 1] == '.')
        {
            printf("1");
            i += 2;
        }
        else if (ch[i] == '-' && ch[i + 1] == '-')
        {
            printf("2");
            i += 2;
        }
    }

    return 0;
}