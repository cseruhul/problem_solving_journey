#include <stdio.h>

int main()
{
    int n, easy_count = 0, hard_count = 0, status;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &status);
        if (status == 0)
        {
            easy_count++;
        }
        else
        {
            hard_count++;
        }
    }

    if (hard_count != 0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    return 0;
}