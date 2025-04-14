#include <stdio.h>

int main()
{
    int count = 0;
    char letters[1002];
    // scanf("%s", letters);
    fgets(letters, 1002, stdin);
    int frequency[26] = {0};
    // printf("%s", letters);
    for (int i = 0; letters[i] != '}'; i++)
    {
        if (letters[i] >= 'a' && letters[i] <= 'z')
        {
            frequency[letters[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}