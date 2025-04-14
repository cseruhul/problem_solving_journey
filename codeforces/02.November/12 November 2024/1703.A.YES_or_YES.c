#include <stdio.h>

int main()
{
    int t;
    char ch[4];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", ch);

        if ((ch[0] == 'Y' || ch[0] == 'y') && (ch[1] == 'E' || ch[1] == 'e') && (ch[2] == 'S' || ch[2] == 's'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}