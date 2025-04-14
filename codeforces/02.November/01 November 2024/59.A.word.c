#include <stdio.h>
#include <string.h>

int main()
{
    int up_letter = 0, low_letter = 0;
    char ch[100];
    scanf("%s", &ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            up_letter++;
        }
        else
        {
            low_letter++;
        }
    }

    if (up_letter > low_letter)
    {
        printf("%s", strupr(ch));
    }
    else
    {
        printf("%s", strlwr(ch));
    }

    return 0;
}