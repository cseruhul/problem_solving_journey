#include <stdio.h>
#include <string.h>

int main()
{
    int t, flag = 0;
    char ch, code[11] = "codeforces";
    scanf("%d", &t);

    while (t--)
    {
        flag = 0;
        scanf(" %c ", &ch);
        // printf("%c", ch);
        for (int i = 0; code[i] != '\0'; i++)
        {
            if (code[i] == ch)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
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