#include <stdio.h>

int main()
{
    char ch1[101];
    int n, t, i;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", ch1);
        i = 0;
        while (ch1[i] != '\0')
        {
            i++;
        }
        if (i <= 10)
        {
            printf("%s\n", ch1);
        }
        else
        {
            printf("%c%d%c\n", ch1[0], i-2, ch1[i - 1]);
        }
    }

    return 0;
}