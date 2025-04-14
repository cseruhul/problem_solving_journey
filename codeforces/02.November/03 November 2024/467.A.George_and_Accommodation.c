#include <stdio.h>

int main()
{
    int n, p, q, room_count = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &p, &q);
        if ((q - p) >= 2)
        {
            room_count++;
        }
    }

    printf("%d\n", room_count);

    return 0;
}