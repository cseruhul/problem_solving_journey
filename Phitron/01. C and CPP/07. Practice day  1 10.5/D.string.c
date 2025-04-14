#include <stdio.h>

int main()
{
    char a[11], b[11], c[22] = {0};
    int an = 0, bn = 0, i = 0, j = 0;
    scanf("%s %s", a, b);

    while (a[i] != '\0')
    {
        an++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        bn++;
        i++;
    }

    printf("%d %d\n", an, bn);

    for (i = 0; i < an; i++)
    {
        c[i] = a[i];
    }

    for (j = 0; j < bn; j++, i++)
    {
        c[i] = b[j];
    }

    printf("%s\n", c);

    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    printf("%s %s\n", a, b);

    return 0;
}