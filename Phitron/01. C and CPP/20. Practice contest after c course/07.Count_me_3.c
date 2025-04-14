#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    char s[10002];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", s);
        int small_letters = 0, capital_letters = 0, digits = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                small_letters++;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                capital_letters++;
            else
                digits++;
        }

        printf("%d %d %d\n", capital_letters, small_letters, digits);
    }

    return 0;
}
