#include <stdio.h>

int main()
{
    int t, left = 0, right = 0;
    char ch[70];

    scanf("%d", &t);

    while (t--)
    {
        left = 0;
        right = 0;
        scanf("%s", ch);
        for (int i = 0, j = 5; i < j; i++, j--)
        {
            left += ch[i] - '0';
            right += ch[j] - '0';
        }
        // printf("left = %d right= %d ", left, right);
        if (left == right)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}