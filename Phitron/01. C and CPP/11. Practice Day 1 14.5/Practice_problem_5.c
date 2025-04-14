#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", ch);
    int freq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[ch[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            printf("%c", i + 'a');
    }

    return 0;
}