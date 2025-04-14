#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[10002];
    scanf("%s", ch);
    int frequency[26] = {0};

    for (int i = 0; i < strlen(ch); i++)
    {
        frequency[ch[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {

            printf("%c - %d\n", i + 'a', frequency[i]);
        }
    }

    return 0;
}
