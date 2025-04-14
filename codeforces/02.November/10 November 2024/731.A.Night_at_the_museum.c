#include <stdio.h>

int main()
{
    char ch[102], current = 'a';
    int diff = 0, rotations = 0;
    scanf("%s", ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (current <= ch[i])
        {
            diff = ch[i] - current;
        }
        else
        {
            diff = current - ch[i];
        }
        if (diff >= 13)
        {
            diff = 26 - diff;
        }
        rotations += diff;
        current = ch[i];
    }

    printf("%d", rotations);

    return 0;
}
