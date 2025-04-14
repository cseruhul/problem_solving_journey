#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 1;
    char guest[102], residence[102], pile[102];
    scanf("%s %s %s", guest, residence, pile);

    int freq[26] = {0};

    for (int i = 0; i < strlen(guest); i++)
    {
        freq[guest[i] - 'A']++;
    }
    for (int i = 0; i < strlen(residence); i++)
    {
        freq[residence[i] - 'A']++;
    }
    for (int i = 0; i < strlen(pile); i++)
    {
        freq[pile[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}