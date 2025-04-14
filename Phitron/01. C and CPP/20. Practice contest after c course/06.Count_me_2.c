#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch[100002];
    scanf("%s", ch);
    int count_consonants = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u')
        {
            count_consonants++;
        }
    }

    printf("%d", count_consonants);
    return 0;
}
