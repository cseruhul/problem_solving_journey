#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);
    strlwr(str);
    int n = strlen(str);

    // printf("%s",str);

    for (int i = 0; i < n; i++)
    {
        char temp = str[i];
        if (temp != 'a' && temp != 'e' && temp != 'i' && temp != 'o' && temp != 'u' && temp != 'y')
        {
            printf(".%c", temp);
        }
    }
    return 0;
}