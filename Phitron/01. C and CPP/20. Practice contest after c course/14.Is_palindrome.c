#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long is_palindrome(char ch[])
{
    int l = 0, r = strlen(ch) - 1, flag = 1;

    while (l <= r)
    {
        if (ch[l] != ch[r])
        {
            flag = 0;
            return flag;
        }
        l++;
        r--;
    }

    return flag;
}

int main()
{
    char ch[1002];
    scanf("%s", ch);

    if (is_palindrome(ch))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
