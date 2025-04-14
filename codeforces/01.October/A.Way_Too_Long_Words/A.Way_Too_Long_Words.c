#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char ch[101];
    scanf("%d", &n);

    while (n--)
    {
        int length;
        scanf("%s", &ch);
        length = strlen(ch);
        if (length > 10)
        {
            printf("%c%d%c\n", ch[0], length - 2, ch[length - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}