#include <stdio.h>

int main()
{
    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    if (s == '<')
    {
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '>')
    {
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    // printf("%d %c %d", a, s, b);

    return 0;
}