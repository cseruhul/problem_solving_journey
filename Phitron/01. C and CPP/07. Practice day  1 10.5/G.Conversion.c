#include <stdio.h>

int main()
{
    char ch[100001];
    int i;
    scanf("%s", ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ',')
        {
            ch[i] = ' ';
        }
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = 'A' + ch[i] - 'a';
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = 'a' + ch[i] - 'A';
        }
    }
    printf("%s\n", ch);
    return 0;
}