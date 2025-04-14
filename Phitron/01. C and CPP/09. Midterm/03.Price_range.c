#include <stdio.h>
#include <string.h>

int main()
{
    int n, x, y, p[100002], no_of_phone = 0;
    scanf("%d %d %d", &n, &x, &y);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] >= x && p[i] <= y)
        {
            no_of_phone++;
        }
    }

    printf("%d", no_of_phone);

    return 0;
}