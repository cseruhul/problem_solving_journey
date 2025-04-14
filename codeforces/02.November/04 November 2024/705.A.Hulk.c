#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str1[] = "I hate";
    char str2[] = "it";
    char love[] = "that I love";
    char hate[] = "that I hate";

    printf("%s ", str1);

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%s ", love);
        }
        else
        {
            printf("%s ", hate);
        }
    }

    printf("%s", str2);

    return 0;
}