#include <stdio.h>
#include <string.h>

int main()
{
    char ch[102], hello[6] = "hello", word[6] = "";
    int i = 0, j = 0;
    scanf("%s", &ch);

    while (ch[i] != '\0' && hello[j] != '\0')
    {
        if (ch[i] == hello[j])
        {
            // printf("%d %d\n", i, j);
            word[j] = ch[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (strcmp(word, hello) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}