#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    scanf("%s", &ch);

    int n = strlen(ch);

    if (n < 3)
    {
        printf("%s", ch);
    }
    else
    {
        for (int i = 0; i + 2 < n; i += 2)
        {
            for (int j = 0; j + 2 < n - i; j += 2)
            {
                if (ch[j] > ch[j + 2])
                {
                    char temp = ch[j];
                    ch[j] = ch[j + 2];
                    ch[j + 2] = temp;
                }
            }
        }

        printf("%s", ch);
    }
    return 0;
}