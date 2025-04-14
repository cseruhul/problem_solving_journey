#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[1002], T[1002];
    scanf("%s %s", S, T);
    int freq_S[26] = {0}, freq_T[26] = {0}, s_len, t_len, flag = 1;
    s_len = strlen(S);
    t_len = strlen(T);
    if (s_len != t_len)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < s_len; i++)
    {
        freq_S[S[i] - 'a']++;
        freq_T[T[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq_S[i] != freq_T[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
