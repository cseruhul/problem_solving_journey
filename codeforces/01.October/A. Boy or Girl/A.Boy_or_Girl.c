#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    scanf("%s", &ch);
    int frequency[26] = {0};
    int flag = 0;

    for (int i = 0; i < strlen(ch); i++)
    {
        frequency[ch[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] == 1)
        {
            flag++;
        }
    }

    if (flag % 2 == 1)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }
    return 0;
}