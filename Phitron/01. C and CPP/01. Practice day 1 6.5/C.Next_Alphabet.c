#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c + 1 > 'z')
        printf("a");
    else
        printf("%c\n", c + 1);

    return 0;
}