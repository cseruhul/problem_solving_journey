#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[1002];
    scanf("%s", ch);
    int n = strlen(ch), odd_count = 0;
    int freq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[ch[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
        {
            odd_count++;
        }
    }

    if (odd_count > 0)
        printf("%d", odd_count - 1);
    else
        printf("0");

    return 0;
}
