#include <stdio.h>

int main()
{
    int n, unrated = 0, available = 0, crime = 0, x;
    scanf("%d", &n);

    while (n--)
    {
        crime = 0;
        scanf("%d", &x);
        if (x == -1)
        {
            crime++;
        }
        else
        {
            available += x;
        }

        if (available >= crime)
        {
            if (crime > 0)
                available--;
        }
        else
        {
            unrated++;
            crime = 0;
        }
    }

    printf("%d", unrated);
    return 0;
}