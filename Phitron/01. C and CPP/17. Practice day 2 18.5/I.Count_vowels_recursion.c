#include <stdio.h>
#include <string.h>

int isVowel(char cha)
{
    if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int count_vowels(char ch[], int i, int n)
{
    if (ch[i] == '\0')
    {
        return 0;
    }

    if (isVowel(ch[i]))
    {
        return 1 + count_vowels(ch, i + 1, n);
    }
    else
    {

        return 0 + count_vowels(ch, i + 1, n);
    }
}

int main()
{
    char ch[202];
    int n;

    fgets(ch, 202, stdin);
    n = strlen(ch);
    // printf("%d\n", n);
    int vowels = count_vowels(ch, 0, n);

    printf("%d", vowels);

    return 0;
}